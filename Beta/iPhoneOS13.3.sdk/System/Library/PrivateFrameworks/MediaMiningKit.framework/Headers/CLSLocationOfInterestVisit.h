/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSLocationOfInterest, NSDateInterval, NSUUID;

@interface CLSLocationOfInterestVisit : NSObject

{
    NSUUID *_identifier;
    NSDateInterval *_visitInterval;
    double _confidence;
    CLSLocationOfInterest *_locationOfInterest;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSDateInterval *visitInterval;
@property (nonatomic, readonly) double confidence;
@property (weak, nonatomic) CLSLocationOfInterest *locationOfInterest;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3;

@end
