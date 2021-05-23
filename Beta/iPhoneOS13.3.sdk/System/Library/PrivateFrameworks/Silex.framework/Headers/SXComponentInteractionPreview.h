/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXComponentInteraction, UIViewController;

@interface SXComponentInteractionPreview : NSObject

{
    SXComponentInteraction *_interaction;
    UIViewController *_viewController;
}

@property (nonatomic, readonly) SXComponentInteraction *interaction;
@property (weak, nonatomic, readonly) UIViewController *viewController;

- (id)initWithInteraction:(id)arg1 viewController:(id)arg2;

@end
