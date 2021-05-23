/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBDaemonHandler : NSObject

+ (void)initialize;
+ (id)stateDescription;
+ (_Bool)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3;
+ (void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2;
+ (void)noteDaemonCanceled:(id)arg1;

@end
