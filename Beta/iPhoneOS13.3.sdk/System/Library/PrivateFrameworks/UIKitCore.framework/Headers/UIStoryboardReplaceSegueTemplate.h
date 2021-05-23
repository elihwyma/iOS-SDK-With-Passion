/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

__attribute__((visibility("hidden")))
@interface UIStoryboardReplaceSegueTemplate : UIStoryboardSegueTemplate

{
    long long _destinationContainmentContext;
    long long _splitViewControllerIndex;
}

@property (nonatomic) long long destinationContainmentContext;
@property (nonatomic) long long splitViewControllerIndex;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;

@end
