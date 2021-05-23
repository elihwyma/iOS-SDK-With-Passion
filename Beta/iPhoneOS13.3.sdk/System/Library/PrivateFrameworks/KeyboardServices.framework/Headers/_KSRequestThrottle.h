/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface _KSRequestThrottle : NSObject

{
    CDUnknownBlockType _curveFunction;
    double _maximum;
    CDUnknownBlockType _request;
    int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_debugIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *debugIdentifier;

- (id)init;
- (void)_launch;
- (void)postRequest:(CDUnknownBlockType)arg1;
- (id)initWithCurve:(CDUnknownBlockType)arg1 maximumDelay:(double)arg2;

@end
