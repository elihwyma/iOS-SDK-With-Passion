/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class INIntent;

@interface UIIntentForwardingAction : BSAction

{
    INIntent *_cachedIntent;
}

@property (nonatomic, readonly) INIntent *intent;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithIntent:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
