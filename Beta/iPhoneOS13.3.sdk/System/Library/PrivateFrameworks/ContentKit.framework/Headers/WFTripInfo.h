/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSMeasurement, NSString, WFTimeInterval;

@interface WFTripInfo : NSObject <Swift>

{
    NSString *_routeName;
    NSMeasurement *_distance;
    WFTimeInterval *_expectedTravelTime;
}

@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) NSMeasurement *distance;
@property (nonatomic, readonly) WFTimeInterval *expectedTravelTime;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMKRoute:(id)arg1;

@end
