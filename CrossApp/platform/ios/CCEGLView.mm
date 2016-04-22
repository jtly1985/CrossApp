
#include "EAGLView.h"
#include "CAApplicationCaller.h"
#include "CCEGLView.h"
#include "CCSet.h"
#include "CATouch.h"
#include "dispatcher/CATouchDispatcher.h"

NS_CC_BEGIN

CCEGLView::CCEGLView()
{
    m_obScreenSize.width = m_obDesignResolutionSize.width = [[EAGLView sharedEGLView] getWidth];
    m_obScreenSize.height = m_obDesignResolutionSize.height = [[EAGLView sharedEGLView] getHeight];
    
    UIInterfaceOrientation orientation = [[UIApplication sharedApplication] statusBarOrientation];
    
    switch (orientation)
    {
        case UIInterfaceOrientationPortrait:
        {
            this->setStatusBarOrientation(CAInterfaceOrientationPortrait);
        }
            break;
        case UIInterfaceOrientationPortraitUpsideDown:
        {
            this->setStatusBarOrientation(CAInterfaceOrientationPortrait);
        }
            break;
        case UIInterfaceOrientationLandscapeRight:
        {
            this->setStatusBarOrientation(CAInterfaceOrientationLandscape);
        }
            break;
        case UIInterfaceOrientationLandscapeLeft:
        {
            this->setStatusBarOrientation(CAInterfaceOrientationLandscape);
        }
            break;
        default:
            break;
    }
}

CCEGLView::~CCEGLView()
{

}

CCEGLView* CCEGLView::sharedOpenGLView()
{
    static CCEGLView instance;
    return &instance;
}


bool CCEGLView::isOpenGLReady()
{
    return [EAGLView sharedEGLView] != NULL;
}

void CCEGLView::end()
{
    [CAApplicationCaller destroy];
    
    // destroy EAGLView
    [[EAGLView sharedEGLView] removeFromSuperview];
}


void CCEGLView::swapBuffers()
{
    [[EAGLView sharedEGLView] swapBuffers];
}

void CCEGLView::checkContext()
{
    [[EAGLView sharedEGLView] checkContext];
}

NS_CC_END

