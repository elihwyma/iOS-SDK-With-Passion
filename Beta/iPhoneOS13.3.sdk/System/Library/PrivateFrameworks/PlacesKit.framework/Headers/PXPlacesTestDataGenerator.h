/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface PXPlacesTestDataGenerator : NSObject

{
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSArray *_latOffsets;
    NSArray *_longOffsets;
    unsigned long long _max;
    struct CLLocationCoordinate2D _from;
    struct CLLocationCoordinate2D _to;
    NSMutableArray *_dataPoints;
}

- (id)init;
- (id)generateOffsetArray:(double)arg1 insert:(_Bool)arg2;
- (unsigned long long)generateDataPointsFromLocation:(struct CLLocationCoordinate2D)arg1 toLocation:(struct CLLocationCoordinate2D)arg2 longDir:(long long)arg3 currentCount:(unsigned long long)arg4;
- (void)generateTestImages:(unsigned long long)arg1 fromLocation:(struct CLLocationCoordinate2D)arg2 toLocation:(struct CLLocationCoordinate2D)arg3 atEnd:(CDUnknownBlockType)arg4;

@end
