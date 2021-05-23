/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject

{
    unsigned long long _overrideType;
    unsigned long long _mode;
    NSArray *_effectiveIntervals;
}

@property (nonatomic, readonly) unsigned long long overrideType;
@property (nonatomic, readonly) unsigned long long mode;
@property (copy, nonatomic, readonly) NSArray *effectiveIntervals;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;

@end
