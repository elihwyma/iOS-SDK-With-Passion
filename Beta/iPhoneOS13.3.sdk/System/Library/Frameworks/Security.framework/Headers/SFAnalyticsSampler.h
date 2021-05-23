/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface SFAnalyticsSampler : NSObject

{
    double _samplingInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
    CDUnknownBlockType _block;
    int _notificationToken;
    Class _clientClass;
    _Bool _oncePerReport;
    _Bool _activeTimer;
}

@property (nonatomic) double samplingInterval;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool oncePerReport;

- (void)dealloc;
- (id)initWithName:(id)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3 clientClass:(Class)arg4;
- (void)newTimer;
- (void)setupOnceTimer;
- (void)setupPeriodicTimer;
- (id)sampleNow;
- (void)pauseSampling;
- (void)resumeSampling;

@end
