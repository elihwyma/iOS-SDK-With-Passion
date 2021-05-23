/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVPlayActivityEnqueuerProperties.h>

@class NSNumber, NSString, NSTimeZone;

@interface SSVMutablePlayActivityEnqueuerProperties : SSVPlayActivityEnqueuerProperties

@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *deviceGUID;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long systemReleaseType;
@property (nonatomic, getter=isSBEnabled) _Bool SBEnabled;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
