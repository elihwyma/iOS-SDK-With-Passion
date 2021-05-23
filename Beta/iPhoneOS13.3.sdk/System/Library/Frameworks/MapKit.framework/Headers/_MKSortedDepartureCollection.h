/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MKSortedDepartureCollection : NSObject

{
    NSMutableArray *_sortedDepartures;
    NSMutableSet *_groupedSequences;
}

@property (retain, nonatomic) NSMutableArray *sortedDepartures;
@property (retain, nonatomic) NSMutableSet *groupedSequences;

@end
