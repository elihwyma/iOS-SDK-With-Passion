/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SRPhoneUsageReport : NSObject

{
    double _duration;
    long long _totalOutgoingCalls;
    long long _totalIncomingCalls;
    long long _totalUniqueContacts;
    double _totalPhoneCallDuration;
    double _startTime;
}

@property double startTime;
@property double duration;
@property long long totalOutgoingCalls;
@property long long totalIncomingCalls;
@property long long totalUniqueContacts;
@property double totalPhoneCallDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)usageReportWithInterval:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)sr_dictionaryRepresentation;

@end
