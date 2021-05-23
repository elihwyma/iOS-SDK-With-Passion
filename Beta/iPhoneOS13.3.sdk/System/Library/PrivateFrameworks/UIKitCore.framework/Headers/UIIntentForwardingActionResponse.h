/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse;

@interface UIIntentForwardingActionResponse : BSActionResponse

{
    INIntentResponse *_cachedIntentResponse;
}

@property (nonatomic, readonly) INIntentResponse *intentResponse;

+ (id)responseWithIntentResponse:(id)arg1;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithIntentResponse:(id)arg1;

@end
