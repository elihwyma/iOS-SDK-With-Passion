/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PAPidAndThread : NSObject

{
    const char *processName;
    unsigned long long tid;
    int pid;
    unsigned long long machAbsTime;
}

- (void)dealloc;

@end
