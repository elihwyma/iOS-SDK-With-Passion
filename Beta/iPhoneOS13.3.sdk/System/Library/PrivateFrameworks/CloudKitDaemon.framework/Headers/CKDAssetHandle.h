/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKObject.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface CKDAssetHandle : CKObject

{
    NSNumber *_itemID;
    NSUUID *_UUID;
    NSString *_path;
    NSNumber *_volumeIndex;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSNumber *_lastUsedTime;
    NSData *_fileSignature;
    NSNumber *_status;
    NSNumber *_modTime;
    NSNumber *_fileSize;
    NSNumber *_chunkCount;
}

@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *volumeIndex;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSNumber *lastUsedTime;
@property (retain, nonatomic) NSData *fileSignature;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *modTime;
@property (retain, nonatomic) NSNumber *fileSize;
@property (retain, nonatomic) NSNumber *chunkCount;

+ (id)CKSQLiteClassName;
+ (id)descriptionWithStatus:(long long)arg1;

- (id)description;
- (id)CKPropertiesDescription;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)statusDescription;
- (_Bool)shouldBeUnregisteredBeforeDeleted;
- (_Bool)mayHaveAssetCacheManagedFile;
- (id)initWithItemID:(id)arg1 UUID:(id)arg2 path:(id)arg3;
- (_Bool)isEqualRevisionOfAssetHandle:(id)arg1 differencesDescription:(id *)arg2;
- (_Bool)mayBeEvicted;
- (_Bool)isEqualToAssetHandle:(id)arg1 keys:(id)arg2 differencesDescription:(id *)arg3;

@end
