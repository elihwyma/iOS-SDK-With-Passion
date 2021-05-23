/*
 Image: /System/Library/PrivateFrameworks/DASActivitySchedulerUI.framework/DASActivitySchedulerUI
 */

#import <BaseBoard/BSActionResponse.h>

@interface _DASUIFetchContentInBackgroundActionResponse : BSActionResponse

@property (nonatomic, readonly) unsigned long long result;

+ (id)responseWithResult:(unsigned long long)arg1;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)initWithBackgroundFetchResult:(unsigned long long)arg1;

@end
