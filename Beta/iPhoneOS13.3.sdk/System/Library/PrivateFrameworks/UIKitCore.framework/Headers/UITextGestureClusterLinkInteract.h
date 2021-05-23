/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextGestureCluster.h>

__attribute__((visibility("hidden")))
@interface UITextGestureClusterLinkInteract : UITextGestureCluster

{
    _Bool _isTryingToHighlightLink;
}

- (id)initWithView:(id)arg1;
- (void)_resetForLink;
- (_Bool)tapOnLinkWithGesture:(id)arg1;
- (void)cancelInteractionWithLink;
- (_Bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;

@end
