/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStoryboardSegueTemplate.h>

__attribute__((visibility("hidden")))
@interface UIStoryboardPresentationSegueTemplate : UIStoryboardSegueTemplate

{
    _Bool _useDefaultModalPresentationStyle;
    _Bool _useDefaultModalTransitionStyle;
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
}

@property (nonatomic) _Bool useDefaultModalPresentationStyle;
@property (nonatomic) _Bool useDefaultModalTransitionStyle;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDUnknownBlockType)newDefaultPrepareHandlerForSegue:(id)arg1;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;

@end
