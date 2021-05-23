/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (CPSafeDescription)

@property (nonatomic, readonly) NSString *CPSafeDescription;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) NSDate *messageSent;
@property (nonatomic, readonly) NSDictionary *persistentUserInfo;
@property (nonatomic, readonly, getter=isFromRequest) _Bool fromRequest;

+ (id)errorWithSYError:(long long)arg1 userInfo:(id)arg2;
+ (id)errorFromSYErrorInfo:(id)arg1;

- (id)initWithSYError:(long long)arg1 userInfo:(id)arg2;

@end
