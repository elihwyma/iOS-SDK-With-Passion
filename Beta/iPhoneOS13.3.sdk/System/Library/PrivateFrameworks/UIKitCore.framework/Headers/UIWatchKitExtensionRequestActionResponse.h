/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSActionResponse.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse

@property (nonatomic, readonly) NSDictionary *result;

+ (id)responseWithWatchKitExtensionResult:(id)arg1;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithWatchKitExtensionResult:(id)arg1;

@end
