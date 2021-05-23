/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/Swift-Protocol.h>

@interface HMDurationEvent : HMTimeEvent <Swift>

{
    double _duration;
}

@property (nonatomic) double duration;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setOffset:(double)arg1;
- (id)initWithDuration:(double)arg1;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)initWithDict:(id)arg1 duration:(double)arg2;
- (void)_updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDuration:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
