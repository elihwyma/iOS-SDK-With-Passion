/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSNumber, NSString, NSTimeZone;

@interface SSVPlayActivityEnqueuerProperties : NSObject

{
    NSString *_buildVersion;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSNumber *_privateListeningEnabled;
    _Bool _SBEnabled;
    unsigned long long _storeAccountID;
    NSString *_storeFrontID;
    long long _systemReleaseType;
    NSTimeZone *_timeZone;
}

@property (copy, nonatomic, readonly) NSString *buildVersion;
@property (copy, nonatomic, readonly, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, readonly) NSString *deviceGUID;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (copy, nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) long long systemReleaseType;
@property (nonatomic, readonly, getter=isSBEnabled) _Bool SBEnabled;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (copy, nonatomic, readonly) NSString *storeFrontID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone *)arg2;

@end
