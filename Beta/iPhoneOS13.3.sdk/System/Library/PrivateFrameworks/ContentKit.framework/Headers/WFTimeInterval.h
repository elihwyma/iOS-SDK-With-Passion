/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSDateComponentsFormatter, NSString;

@interface WFTimeInterval : NSObject <Swift>

{
    NSDateComponentsFormatter *_timeIntervalFormatter;
    unsigned long long _hash;
    double _timeInterval;
    unsigned long long _allowedUnits;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
}

@property (nonatomic, readonly) NSDateComponentsFormatter *timeIntervalFormatter;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) unsigned long long allowedUnits;
@property (nonatomic, readonly) long long unitsStyle;
@property (nonatomic, readonly) unsigned long long zeroFormattingBehavior;
@property (nonatomic, readonly) NSString *absoluteTimeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (id)wfName;
- (id)wfSerializedRepresentation;
- (id)initWithTimeInterval:(double)arg1 allowedUnits:(unsigned long long)arg2 unitsStyle:(long long)arg3 zeroFormattingBehavior:(unsigned long long)arg4;

@end
