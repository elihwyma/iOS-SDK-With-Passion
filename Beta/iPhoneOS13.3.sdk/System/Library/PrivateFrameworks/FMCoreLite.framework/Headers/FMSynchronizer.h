/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_semaphore;

@interface FMSynchronizer : NSObject

{
    _Bool _timeoutOccurred;
    double _timeout;
    NSString *_info;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (nonatomic) _Bool timeoutOccurred;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;

@end
