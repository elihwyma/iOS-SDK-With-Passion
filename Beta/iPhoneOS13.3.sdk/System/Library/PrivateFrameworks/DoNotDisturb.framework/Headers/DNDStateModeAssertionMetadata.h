/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSDate, NSDateInterval, NSString;

@interface DNDStateModeAssertionMetadata : NSObject

{
    NSString *_clientIdentifier;
    NSString *_modeIdentifier;
    unsigned long long _lifetimeType;
    NSDateInterval *_activeDateInterval;
    NSDate *_userVisibleEndDate;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSDate *userVisibleEndDate;
@property (copy, nonatomic, readonly) NSString *modeIdentifier;
@property (nonatomic, readonly) unsigned long long lifetimeType;
@property (copy, nonatomic, readonly) NSDateInterval *activeDateInterval;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetimeType:(unsigned long long)arg3 activeDateInterval:(id)arg4 userVisibleEndDate:(id)arg5;

@end
