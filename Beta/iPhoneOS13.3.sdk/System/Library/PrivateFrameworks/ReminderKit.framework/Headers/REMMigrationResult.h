/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString;

@interface REMMigrationResult : NSObject <Swift>

{
    _Bool _isObserver;
    NSString *_state;
    double _timeElapsed;
    unsigned long long _listsMigrated;
    unsigned long long _remindersMigrated;
    NSString *_log;
}

@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) _Bool isObserver;
@property (nonatomic, readonly) double timeElapsed;
@property (nonatomic, readonly) unsigned long long listsMigrated;
@property (nonatomic, readonly) unsigned long long remindersMigrated;
@property (nonatomic, readonly) NSString *log;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 IsObserver:(_Bool)arg2 timeElapsed:(double)arg3 listsMigrated:(unsigned long long)arg4 remindersMigrated:(unsigned long long)arg5 log:(id)arg6;

@end
