/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSOperation.h>

@interface SOAsynchronousOperation : NSOperation

{
    unsigned long long _state;
}

@property (nonatomic) unsigned long long state;

- (id)init;
- (void)start;
- (void)main;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (void)finish;

@end
