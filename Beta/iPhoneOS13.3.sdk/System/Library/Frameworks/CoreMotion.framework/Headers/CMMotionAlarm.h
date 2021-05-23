/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMMotionAlarmManager, NSString;

@interface CMMotionAlarm : NSObject

{
    _Bool _repeats;
    unsigned int _duration;
    unsigned int _type;
    int _state;
    NSString *_name;
    unsigned long long _alarmId;
    NSString *_bundleId;
    CMMotionAlarmManager *_manager;
}

@property (nonatomic) unsigned long long alarmId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) int state;
@property (retain, nonatomic) CMMotionAlarmManager *manager;
@property (retain, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) _Bool repeats;
@property (nonatomic, readonly) unsigned int type;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)copyPropertiesFromAlarm:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(_Bool)arg4;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(_Bool)arg4 alarmId:(unsigned long long)arg5 bundleId:(id)arg6 state:(int)arg7;
- (_Bool)acknowledgeWithError:(id *)arg1;
- (_Bool)unregisterWithError:(id *)arg1;

@end
