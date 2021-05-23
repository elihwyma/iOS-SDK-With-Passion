/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCOperationDelayedRetrySignal : NSObject

{
    unsigned long long _signalTime;
    double _delay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;
- (id)initWithDelay:(double)arg1;

@end
