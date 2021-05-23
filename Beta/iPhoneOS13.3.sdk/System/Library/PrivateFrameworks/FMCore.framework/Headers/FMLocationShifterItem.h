/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject

{
    _Bool _shifted;
    double _accuracy;
    NSDate *_timestamp;
    id _context;
    NSError *_error;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (nonatomic) double accuracy;
@property (nonatomic) _Bool shifted;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) id context;

- (id)init;
- (id)description;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4;

@end
