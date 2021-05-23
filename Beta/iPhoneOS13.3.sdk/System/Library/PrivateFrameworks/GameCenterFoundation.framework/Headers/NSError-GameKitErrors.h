/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSError.h>

@interface NSError (GameKitErrors)

+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;
+ (id)userErrorForServerError:(id)arg1;
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)_gkUnauthenticatedError;
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_gkUserErrorForTournamentErrorCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;

- (_Bool)_gkIsUnauthenticatedError;

@end
