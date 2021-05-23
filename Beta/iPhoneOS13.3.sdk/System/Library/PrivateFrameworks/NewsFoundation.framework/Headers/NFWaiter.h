/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@interface NFWaiter : NSObject

{
    double _interval;
    double _timeout;
}

@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) double timeout;

+ (id)error;
+ (void)waitFor:(CDUnknownBlockType)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)waitUntil:(CDUnknownBlockType)arg1 waitInterval:(double)arg2 timeoutInterval:(double)arg3 completion:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(CDUnknownBlockType)arg3;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 conditionProvider:(CDUnknownBlockType)arg3;
+ (id)waitWithInterval:(double)arg1 timeout:(double)arg2 valueProvider:(CDUnknownBlockType)arg3 condition:(CDUnknownBlockType)arg4;
+ (id)waitWithTimeout:(double)arg1 valueProvider:(CDUnknownBlockType)arg2;
+ (id)waitWithTimeout:(double)arg1 conditionProvider:(CDUnknownBlockType)arg2;

@end
