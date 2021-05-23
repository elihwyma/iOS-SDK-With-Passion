/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXTilingLayoutInvalidationContext.h>

@class PXRelatedDataSource;

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext

{
    PXRelatedDataSource *_fromDataSource;
    PXRelatedDataSource *_toDataSource;
}

@property (retain, nonatomic) PXRelatedDataSource *fromDataSource;
@property (retain, nonatomic) PXRelatedDataSource *toDataSource;

@end
