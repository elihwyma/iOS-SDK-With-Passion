/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardEmbedSegueTemplate : UIStoryboardSegueTemplate

{
    UIView *_containerView;
}

@property (retain, nonatomic) UIView *containerView;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;

@end
