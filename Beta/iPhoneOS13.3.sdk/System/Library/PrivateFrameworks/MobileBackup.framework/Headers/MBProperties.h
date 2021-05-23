/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface MBProperties : NSObject

{
    _Bool _protect;
    _Bool _protected;
    id _plist;
    double _minSupportedVersion;
    double _maxSupportedVersion;
}

@property (nonatomic) double minSupportedVersion;
@property (nonatomic) double maxSupportedVersion;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, getter=isProtected) _Bool protected;
@property (nonatomic) double systemDomainsVersion;
@property (retain, nonatomic) NSData *keybagData;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double version;
@property (nonatomic, getter=wasPasscodeSet) _Bool passcodeSet;
@property (nonatomic) _Bool encrypted;
@property (nonatomic, readonly) NSDictionary *containers;
@property (nonatomic, readonly) NSDictionary *appleIDs;
@property (retain, nonatomic) NSString *activeAppleID;
@property (retain, nonatomic) NSDictionary *lockdownKeys;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *buildVersion;
@property (retain, nonatomic) NSData *buddyStashData;
@property (nonatomic, readonly) _Bool hasCorruptSQLiteDBs;
@property (nonatomic, readonly) _Bool hasManifestDB;
@property (nonatomic, readonly) _Bool hasEncryptedManifestDB;
@property (nonatomic) NSData *manifestEncryptionKey;

+ (id)properties;
+ (id)propertiesWithFile:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)containerWithIdentifier:(id)arg1;
- (_Bool)_boolForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;
- (id)_dictionaryForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (void)_setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)initWithFile:(id)arg1 error:(id *)arg2;
- (id)initWithVersion:(double)arg1 minVersion:(double)arg2 maxVersion:(double)arg3;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)_stringForLockdownKey:(id)arg1;
- (void)addContainer:(id)arg1;
- (void)addAppleIDsFromSet:(id)arg1 dataClass:(id)arg2;
- (void)addAppleID:(id)arg1 DSID:(id)arg2 altDSID:(id)arg3 dataClass:(id)arg4;
- (void)addAssetDescriptionForAppleID:(id)arg1 assetDescription:(id)arg2;
- (void)addContainersFromArray:(id)arg1;
- (void)removeAllContainers;
- (id)dataWithError:(id *)arg1;

@end
