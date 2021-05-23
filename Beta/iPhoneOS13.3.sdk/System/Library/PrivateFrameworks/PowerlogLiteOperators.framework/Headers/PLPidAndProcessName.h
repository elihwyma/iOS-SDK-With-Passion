/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface PLPidAndProcessName : NSObject

{
    NSNumber *_pid;
    NSString *_processName;
}

@property (retain) NSNumber *pid;
@property (retain) NSString *processName;

- (id)description;

@end
