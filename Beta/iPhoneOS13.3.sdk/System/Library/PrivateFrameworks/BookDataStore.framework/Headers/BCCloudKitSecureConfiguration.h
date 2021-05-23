/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BCCloudKitSecureConfiguration : NSObject

{
    _Bool _requiresDeviceToDeviceEncryption;
    NSString *_queueIdentifier;
    NSString *_containerIdentifier;
    NSArray *_appZones;
    NSArray *_serviceZones;
    NSString *_dbArchiveFolderName;
    NSString *_dbArchiveExtension;
    NSString *_dbArchiveFilename;
    NSString *_dbSubscriptionID;
    NSString *_appBundleIdentifier;
}

@property (retain, nonatomic) NSString *queueIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSArray *appZones;
@property (retain, nonatomic) NSArray *serviceZones;
@property (retain, nonatomic) NSString *dbArchiveFolderName;
@property (retain, nonatomic) NSString *dbArchiveExtension;
@property (retain, nonatomic) NSString *dbArchiveFilename;
@property (retain, nonatomic) NSString *dbSubscriptionID;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (nonatomic) _Bool requiresDeviceToDeviceEncryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configuration;

- (_Bool)shouldArchiveData:(id)arg1;
- (_Bool)shouldPerformDatabaseSubscriptionForServiceMode:(_Bool)arg1;

@end
