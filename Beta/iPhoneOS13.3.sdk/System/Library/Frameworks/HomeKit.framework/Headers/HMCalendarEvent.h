/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/Swift-Protocol.h>

@class NSDateComponents;

@interface HMCalendarEvent : HMTimeEvent <Swift>

{
    NSDateComponents *_fireDateComponents;
}

@property (retain, nonatomic) NSDateComponents *fireDateComponents;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)initWithDict:(id)arg1 fireDateComponents:(id)arg2;
- (void)_updateFireDateComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFireDateComponents:(id)arg1;
- (void)updateFireDateComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
