/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSActionResponse.h>

@interface UIWillPresentNotificationActionResponse : BSActionResponse

@property (nonatomic, readonly) unsigned long long options;

+ (id)responseWithOptions:(unsigned long long)arg1;

- (id)initWithOptions:(unsigned long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithInfo:(id)arg1 error:(id)arg2;

@end
