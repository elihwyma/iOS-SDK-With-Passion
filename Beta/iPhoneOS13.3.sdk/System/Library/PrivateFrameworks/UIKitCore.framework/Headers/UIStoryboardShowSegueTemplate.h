/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardShowSegueTemplate : UIStoryboardSegueTemplate

{
    NSString *_action;
}

@property (copy, nonatomic) NSString *action;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;

@end
