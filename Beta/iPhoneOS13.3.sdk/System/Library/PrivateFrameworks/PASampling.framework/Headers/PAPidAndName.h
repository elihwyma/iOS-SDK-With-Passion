/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <Foundation/NSObject.h>

@interface PAPidAndName : NSObject

{
    const char *name;
    int pid;
    unsigned long long machAbsTime;
}

- (void)dealloc;

@end
