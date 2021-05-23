/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHAsset, PHFace, PHPerson;

@interface PXPeopleFaceTile : NSObject

{
    PHPerson *_person;
    PHFace *_face;
    PHAsset *_asset;
}

@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) PHFace *face;
@property (nonatomic, readonly) PHAsset *asset;
@property (readonly) _Bool isUserDefined;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithFace:(id)arg1 asset:(id)arg2 person:(id)arg3;

@end
