/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CalLogEnvelope : NSObject

{
    NSString *_logName;
    int _level;
    NSString *_message;
    int _processID;
    NSString *_processName;
    unsigned int _machPort;
    double _timestamp;
    NSString *_function;
}

@property (retain, nonatomic) NSString *logName;
@property (nonatomic) int level;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int processID;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *function;

- (id)init;
- (id)description;
- (id)initWithLogName:(id)arg1 level:(int)arg2 message:(id)arg3;

@end
