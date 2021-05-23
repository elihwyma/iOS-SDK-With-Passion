/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSSet, NSString;

@protocol PLMomentProtocol;

@interface PLFrequentLocation : NSObject

{
    NSDateInterval *_dateInterval;
    id <PLMomentProtocol> _centroid;
    NSSet *_items;
    struct CLLocationCoordinate2D _coordinate;
}

@property (readonly) id <PLMomentProtocol> centroid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct CLLocationCoordinate2D coordinate;
@property (readonly) NSDateInterval *dateInterval;
@property (readonly) NSSet *items;

- (id)initWithDateInterval:(id)arg1 centroid:(id)arg2 items:(id)arg3;
- (_Bool)isSimilarToFrequentLocation:(id)arg1;
- (_Bool)isWithinDistance:(double)arg1 toCoordinate:(struct CLLocationCoordinate2D)arg2;

@end
