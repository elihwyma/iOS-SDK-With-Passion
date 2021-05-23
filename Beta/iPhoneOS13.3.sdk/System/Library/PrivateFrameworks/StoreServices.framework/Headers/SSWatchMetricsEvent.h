/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SSWatchMetricsEvent : NSObject

{
    NSString *_appExtensionVersion;
    NSString *_bundleIdentifier;
    NSString *_downloadVarietyID;
    unsigned long long _eventType;
    unsigned long long _installType;
    NSString *_model;
    NSString *_osVersion;
    NSString *_versionString;
    NSString *_watchGuid;
    NSString *_watchSerial;
    NSString *_watchSize;
    NSDate *_timestamp;
    NSNumber *_adamId;
    NSString *_cohortID;
    NSNumber *_pid;
    NSNumber *_appExternalVersionID;
    NSNumber *_purchaserDsid;
    NSNumber *_userDsid;
}

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSNumber *adamId;
@property (copy, nonatomic) NSString *cohortID;
@property (copy, nonatomic) NSNumber *pid;
@property (copy, nonatomic) NSNumber *appExternalVersionID;
@property (copy, nonatomic) NSNumber *purchaserDsid;
@property (copy, nonatomic) NSNumber *userDsid;
@property (copy, nonatomic) NSString *appExtensionVersion;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *downloadVarietyID;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long installType;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *versionString;
@property (copy, nonatomic) NSString *watchGuid;
@property (copy, nonatomic) NSString *watchSerial;
@property (copy, nonatomic) NSString *watchSize;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_appCohortID:(id)arg1;
- (id)financeDictionaryRepresentation;

@end
