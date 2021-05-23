/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@class CLLocation;

@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec

{
    CLLocation *_location;
    double _regionRadius;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double regionRadius;

+ (id)specWithLocation:(id)arg1 regionRadius:(double)arg2;

- (id)initWithLocation:(id)arg1 regionRadius:(double)arg2;

@end
