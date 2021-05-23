/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

#import <MobileTimer/Swift-Protocol.h>

@class MTTrigger, NSString;

@protocol MTScheduleable;

@interface MTScheduledObject : NSObject <Swift>

{
    id <MTScheduleable> _scheduleable;
    MTTrigger *_trigger;
}

@property (copy, nonatomic) id <MTScheduleable> scheduleable;
@property (copy, nonatomic) MTTrigger *trigger;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)scheduledTypeForTriggerType:(unsigned long long)arg1;
+ (id)scheduledObjectForScheduleable:(id)arg1 trigger:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScheduleable:(id)arg1 trigger:(id)arg2;
- (_Bool)isEqualToScheduledObject:(id)arg1;

@end
