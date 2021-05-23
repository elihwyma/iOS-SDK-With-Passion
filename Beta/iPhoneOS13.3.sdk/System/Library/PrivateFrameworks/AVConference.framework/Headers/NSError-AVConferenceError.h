/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSError.h>

@interface NSError (AVConferenceError)

+ (id)AVConferenceServiceError:(long long)arg1 detailCode:(long long)arg2 description:(id)arg3;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 returnCode:(long long)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 filePath:(id)arg3 description:(id)arg4 reason:(id)arg5;

@end
