/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSData, NSDate, NSString;

@interface STShowMapPointRequest : AFSiriRequest

{
    NSData *_placeData;
    NSString *_extSessionGuid;
    NSDate *_extSessionGuidCreatedTimestamp;
    _Bool _isCurrentLocation;
}

@property (nonatomic) _Bool isCurrentLocation;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;
- (id)mapPointData;

@end
