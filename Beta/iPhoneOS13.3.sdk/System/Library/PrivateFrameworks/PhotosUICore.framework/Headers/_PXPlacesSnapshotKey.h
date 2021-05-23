/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface _PXPlacesSnapshotKey : NSObject <Swift>

{
    long long __userInterfaceStyle;
    struct CGSize __imageSize;
}

@property (nonatomic, readonly) struct CGSize _imageSize;
@property (nonatomic, readonly) long long _userInterfaceStyle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageSize:(struct CGSize)arg1 userInterfaceStyle:(long long)arg2;

@end
