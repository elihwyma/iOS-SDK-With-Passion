/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecordZoneID, NSData, NSError, NSString, NSURL;

@interface CKAssetRereferenceInfo : NSObject

{
    CKRecordZoneID *_sourceZoneID;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSData *_assetKey;
    NSData *_referenceSignature;
    NSString *_downloadToken;
    unsigned long long _downloadTokenExpiration;
    NSError *_error;
    NSString *_destinationFieldName;
}

@property (retain, nonatomic) CKRecordZoneID *sourceZoneID;
@property (retain, nonatomic) NSURL *contentBaseURL;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSData *assetKey;
@property (retain, nonatomic) NSData *referenceSignature;
@property (retain, nonatomic) NSString *downloadToken;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *destinationFieldName;

- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithSourceZoneID:(id)arg1;
- (void)clearRecordFetchProperties;
- (_Bool)validateAndSetRecordFetchPropertiesWithAsset:(id)arg1 assetReference:(id)arg2 useEncryption:(_Bool)arg3 useClearAssetEncryption:(_Bool)arg4;

@end
