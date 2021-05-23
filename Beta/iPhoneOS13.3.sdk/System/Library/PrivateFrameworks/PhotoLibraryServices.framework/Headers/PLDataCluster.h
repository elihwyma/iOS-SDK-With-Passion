/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PLDataCluster : NSObject

{
    NSArray *_objects;
    double _diameter;
    id _clustroid;
    double _score;
}

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) double diameter;
@property (retain, nonatomic) id clustroid;
@property (nonatomic) double score;

+ (id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3;
+ (id)clusterWithObjects:(id)arg1;

- (id)init;
- (id)description;
- (id)locations;
- (id)meanRegion:(double)arg1;
- (id)universalDates;
- (id)approximateRegionWithMaximumRadius:(double)arg1;
- (id)meanUniversalDate;

@end
