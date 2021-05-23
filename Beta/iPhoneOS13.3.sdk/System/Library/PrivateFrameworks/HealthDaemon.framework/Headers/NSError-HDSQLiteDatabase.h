/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (HDSQLiteDatabase)

@property (nonatomic, readonly) unsigned short hd_messageID;
@property (nonatomic, readonly) NSDate *hd_messageSent;
@property (nonatomic, readonly) NSString *hd_messageIDSIdentifier;
@property (nonatomic, readonly) NSString *hd_messageIDSDeviceIdentifier;
@property (nonatomic, readonly) NSDictionary *hd_persistentUserInfo;
@property (nonatomic, readonly, getter=hd_isFromRequest) _Bool hd_fromRequest;

+ (id)hk_errorWithCodableError:(id)arg1;

- (_Bool)hd_isConstraintViolation;
- (id)hd_underlyingSQLiteError;
- (_Bool)hd_isDatabaseCorruptionError;
- (_Bool)hd_isResponseTimeout;
- (id)hd_persistentMessage;
- (id)hk_codableError;
- (id)hd_cloudKitErrorRequiringUserAction;
- (id)hd_cloudKitErrorRequiringUserActionFromCKErrorDomain;
- (_Bool)hd_isManateeIdentityLossError;

@end
