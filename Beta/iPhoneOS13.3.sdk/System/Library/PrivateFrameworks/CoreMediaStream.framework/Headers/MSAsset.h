/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface MSAsset : NSObject

{
    _Bool _assetDataAvailableOnServer;
    NSData *_masterAssetHash;
    NSDictionary *_metadata;
    NSString *_path;
    NSURL *_MMCSURL;
    NSData *_fileData;
    NSError *_error;
    NSString *_type;
    NSData *_fileHash;
    unsigned long long _protocolFileSize;
    NSString *_MMCSAccessHeader;
    NSDate *_MMCSAccessHeaderTimeStamp;
    NSString *_MMCSReceipt;
    NSString *_GUID;
    NSString *_assetCollectionGUID;
    NSDate *_batchCreationDate;
    NSDate *_photoCreationDate;
    id _userInfo;
    unsigned long long _mediaAssetType;
}

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSData *masterAssetHash;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSURL *MMCSURL;
@property (retain, nonatomic) NSData *fileData;
@property (retain, nonatomic) NSString *assetCollectionGUID;
@property (retain, nonatomic) NSDate *batchCreationDate;
@property (retain, nonatomic) NSDate *photoCreationDate;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) unsigned long long mediaAssetType;
@property (nonatomic) _Bool assetDataAvailableOnServer;
@property (retain, nonatomic) NSData *fileHash;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned long long protocolFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *MMCSUTI;
@property (nonatomic) unsigned long long MMCSItemID;
@property (retain, nonatomic) NSData *MMCSHash;
@property (nonatomic) unsigned long long MMCSItemSize;
@property (retain, nonatomic) NSError *MMCSError;
@property (retain, nonatomic) NSString *MMCSAccessHeader;
@property (retain, nonatomic) NSDate *MMCSAccessHeaderTimeStamp;
@property (retain, nonatomic) NSString *MMCSReceipt;
@property (nonatomic) unsigned int MMCSItemFlags;

+ (_Bool)supportsSecureCoding;
+ (id)asset;
+ (id)assetWithAsset:(id)arg1;
+ (id)MSASPAssetFromProtocolDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_fileSize;
- (_Bool)isVideo;
- (_Bool)isPhoto;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (id)initWithGUID:(id)arg1;
- (int)MMCSOpenNewFileDescriptor;
- (id)MMCSItemType;
- (void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2;
- (unsigned long long)_fileSizeOnDisk;
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)MSASPProtocolDictionary;

@end
