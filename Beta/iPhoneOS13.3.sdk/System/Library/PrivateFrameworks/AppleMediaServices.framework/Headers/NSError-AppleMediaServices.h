/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (AppleMediaServices)

@property (nonatomic, readonly) NSString *ams_message;
@property (nonatomic, readonly) NSString *ams_title;
@property (nonatomic, readonly, getter=ams_isUserCancelledError) _Bool ams_userCancelledError;

- (_Bool)ams_hasDomain:(id)arg1 code:(unsigned long long)arg2;
- (id)ams_errorByAddingUserInfo:(id)arg1;

@end
