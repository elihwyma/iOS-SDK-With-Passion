/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSDate, NSUUID;

@interface HMCameraClipSignificantEvent : NSObject <Swift>

{
    NSUUID *_uniqueIdentifier;
    unsigned long long _reason;
    NSDate *_dateOfOccurrence;
    double _timeOffsetWithinClip;
    unsigned long long _confidenceLevel;
}

@property (copy, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long reason;
@property (copy, readonly) NSDate *dateOfOccurrence;
@property (readonly) double timeOffsetWithinClip;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly) _Bool canAskForUserFeedback;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 timeOffsetWithinClip:(double)arg3 dateOfOccurrence:(id)arg4 confidenceLevel:(unsigned long long)arg5;
- (id)initWithUniqueIdentifier:(id)arg1 reason:(unsigned long long)arg2 dateOfOccurrence:(id)arg3 confidenceLevel:(unsigned long long)arg4;

@end
