/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface VKMuninMarker : NSObject

{
    struct optional<md::mun::CollectionPoint> _collectionPoint;
    CDStruct_071ac149 _coordinate;
}

@property (nonatomic, readonly) const struct CollectionPoint *collectionPoint;
@property (nonatomic, readonly) _Bool canMoveToMarker;
@property (nonatomic, readonly) CDStruct_071ac149 coordinate;
@property (nonatomic, readonly) NSDate *collectionDate;
@property (nonatomic, readonly) unsigned long long pointId;
@property (nonatomic, readonly) unsigned int buildId;

- (id).cxx_construct;
- (id)initWithCoordinate:(CDStruct_071ac149)arg1;
- (id)initWithCollectionPoint:(const struct CollectionPoint *)arg1;

@end
