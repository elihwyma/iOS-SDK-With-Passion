/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate

{
    NSString *_action;
}

@property (copy, nonatomic) NSString *action;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_perform:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;
- (id)segueWithDestinationViewController:(id)arg1;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;
- (id)_legacyUnwindExecutorForTarget:(id)arg1;

@end
