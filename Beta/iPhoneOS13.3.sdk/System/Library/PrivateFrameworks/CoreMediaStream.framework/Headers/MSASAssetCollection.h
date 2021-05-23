/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface MSASAssetCollection : NSObject

{
    _Bool _hasComments;
    _Bool _isDeletable;
    _Bool _isMine;
    NSString *_GUID;
    NSString *_ctag;
    NSString *_albumGUID;
    NSArray *_assets;
    NSString *_fileName;
    NSString *_path;
    id _userInfo;
    NSDictionary *_metadata;
    long long _photoNumber;
    NSDate *_timestamp;
    NSString *_personID;
    NSString *_fullName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
}

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long photoNumber;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *email;
@property (nonatomic) _Bool isDeletable;
@property (nonatomic) _Bool isMine;
@property (nonatomic) _Bool hasComments;

+ (_Bool)supportsSecureCoding;
+ (id)assetCollectionWithAssetCollection:(id)arg1;
+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isVideo;
- (_Bool)isAutoloopVideo;
- (_Bool)isPhotoIris;
- (id)mediaAssetType;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)initWithFileName:(id)arg1 path:(id)arg2;
- (_Bool)hasVideoAsset;
- (id)MSASPProtocolDictionary;

@end
