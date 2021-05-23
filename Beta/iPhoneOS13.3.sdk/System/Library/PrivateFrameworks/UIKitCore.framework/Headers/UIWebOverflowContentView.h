/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIWebOverflowContentView : UIView

{
    CALayer *_webLayer;
}

@property (retain, nonatomic) CALayer *webLayer;

- (void)dealloc;
- (id)superview;
- (id)initWithLayer:(id)arg1;
- (void)replaceLayer:(id)arg1;
- (void)willBeRemoved;
- (void)fixUpViewAfterInsertion;
- (void)_setCachedSubviews:(id)arg1;

@end
