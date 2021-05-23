/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CMMotionAlarmDelegateProtocol;

@interface CMMotionAlarmManager : NSObject

{
    id <CMMotionAlarmDelegateProtocol> _delegate;
    NSString *_name;
}

@property (nonatomic) id <CMMotionAlarmDelegateProtocol> delegate;
@property (nonatomic, readonly) NSString *name;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (_Bool)unregisterAlarmWithName:(id)arg1 error:(id *)arg2;
- (_Bool)acknowledgeAlarmWithName:(id)arg1 error:(id *)arg2;
- (_Bool)registerAlarmWithName:(id)arg1 type:(unsigned int)arg2 duration:(unsigned int)arg3 repeats:(_Bool)arg4 error:(id *)arg5;
- (_Bool)launchRemoteAppWithError:(id *)arg1;
- (_Bool)unregisterAlarm:(id)arg1 error:(id *)arg2;
- (_Bool)acknowledgeAlarm:(id)arg1 error:(id *)arg2;

@end
