/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AssetCollectionInfo : NSObject

{
    _Bool _isMine;
    _Bool _isVideo;
    _Bool _isPhotoIris;
    _Bool _isDeletable;
    unsigned short _playbackVariation;
    NSString *_GUID;
    NSString *_personID;
    NSDictionary *_metaData;
    NSNumber *_width;
    NSNumber *_height;
    NSDate *_timestamp;
    NSString *_derivativeUTI;
}

@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) _Bool isMine;
@property (nonatomic, readonly) _Bool isVideo;
@property (nonatomic, readonly) _Bool isPhotoIris;
@property (nonatomic, readonly) unsigned short playbackVariation;
@property (nonatomic, readonly) _Bool isDeletable;
@property (nonatomic, readonly) NSDictionary *metaData;
@property (nonatomic, readonly) NSNumber *width;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSString *derivativeUTI;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetCollection:(id)arg1;

@end
