/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class _GKBubbleFlowTransitionInfo;

@interface GKTabBarTransitionAnimator : NSObject <UIViewControllerAnimatorTransitioning> {
    _GKBubbleFlowTransitionInfo *_transitionInfo;
}

@property(retain) _GKBubbleFlowTransitionInfo * transitionInfo;

- (void)_animateTransition:(id)arg1;
- (void)_animateTransitionInTwoParts:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (void)dealloc;
- (void)setTransitionInfo:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)transitionInfo;

@end
