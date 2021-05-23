/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <Swift>

{
    PXExtendedTraitCollection *_extendedTraitCollection;
}

@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;

@end
