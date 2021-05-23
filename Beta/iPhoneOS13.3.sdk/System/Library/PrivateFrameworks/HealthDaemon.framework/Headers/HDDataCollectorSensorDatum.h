/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSDateInterval, NSString, NSUUID;

@interface HDDataCollectorSensorDatum : NSObject

{
    NSUUID *_datumIdentifier;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
    CDUnknownBlockType _resumeContextProvider;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType resumeContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *datumIdentifier;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;
@property (copy, nonatomic, readonly) NSData *resumeContext;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContextProvider:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;

@end
