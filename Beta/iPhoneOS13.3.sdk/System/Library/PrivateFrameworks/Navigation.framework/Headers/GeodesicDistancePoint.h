/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GeodesicDistancePoint : NSObject

{
    NSDate *_date;
    double _geodesicDistance;
}

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double geodesicDistance;
@property (readonly) double timeIntervalSinceReferenceDate;

- (id)description;
- (id)initWithDate:(id)arg1 geodesicDistance:(double)arg2;

@end
