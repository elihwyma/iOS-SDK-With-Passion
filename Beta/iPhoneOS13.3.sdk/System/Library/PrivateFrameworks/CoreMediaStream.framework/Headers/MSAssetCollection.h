/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSAsset, NSArray, NSData, NSDate, NSString;

@interface MSAssetCollection : NSObject

{
    NSString *_assetCollectionID;
    NSString *_ctag;
    MSAsset *_masterAsset;
    NSArray *_derivedAssets;
    NSString *_fileName;
    _Bool _wasDeleted;
    NSDate *_serverUploadedDate;
    long long _initialFailureDate;
}

@property (retain, nonatomic) NSString *assetCollectionID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) MSAsset *masterAsset;
@property (weak, nonatomic, readonly) NSData *masterAssetHash;
@property (retain, nonatomic) NSArray *derivedAssets;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) _Bool wasDeleted;
@property (retain, nonatomic) NSDate *serverUploadedDate;
@property (nonatomic) long long initialFailureDate;

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;

@end
