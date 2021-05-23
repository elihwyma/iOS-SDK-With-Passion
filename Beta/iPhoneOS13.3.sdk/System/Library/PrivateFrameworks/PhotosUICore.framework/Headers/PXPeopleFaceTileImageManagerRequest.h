/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHAsset, PHFace, PHPerson;

@interface PXPeopleFaceTileImageManagerRequest : NSObject

{
    _Bool _synchronous;
    PHPerson *_person;
    PHFace *_face;
    PHAsset *_asset;
    long long _deliveryMode;
}

@property (retain, nonatomic) PHFace *face;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) _Bool synchronous;

- (id)description;
- (id)initWithPerson:(id)arg1;
- (id)initWithPerson:(id)arg1 face:(id)arg2 asset:(id)arg3;
- (id)initWithFaceTile:(id)arg1;

@end
