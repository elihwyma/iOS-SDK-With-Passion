/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMTimeEvent.h>

#import <HomeKit/Swift-Protocol.h>

@class NSDateComponents, NSString;

@interface HMSignificantTimeEvent : HMTimeEvent <Swift>

{
    NSString *_significantEvent;
    NSDateComponents *_offset;
}

@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *offset;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3;
- (void)_update:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;
- (void)updateOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
