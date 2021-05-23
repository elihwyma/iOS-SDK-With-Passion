/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <FrontBoardServices/BSActionResponse.h>

@interface SBUIRemoteAlertButtonActionResponse : BSActionResponse

@property (nonatomic, readonly) unsigned long long unHandledEvents;

- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)initWithUnHandledEvents:(unsigned long long)arg1;

@end
