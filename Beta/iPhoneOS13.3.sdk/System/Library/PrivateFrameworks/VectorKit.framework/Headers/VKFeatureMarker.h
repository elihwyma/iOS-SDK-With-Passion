/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOFeatureStyleAttributes, NSString;

@interface VKFeatureMarker : NSObject

{
    shared_ptr_430519ce _actualFeatureMarker;
}

@property (readonly) const shared_ptr_430519ce *actualFeatureMarker;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) unsigned long long venueID;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;

+ (id)markerWithFeatureMarker:(const shared_ptr_430519ce *)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFeatureMarkerPtr:(const shared_ptr_430519ce *)arg1;

@end
