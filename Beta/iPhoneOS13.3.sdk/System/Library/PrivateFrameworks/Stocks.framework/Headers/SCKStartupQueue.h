/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject

{
    SCKAsyncSerialQueue *_startupTaskQueue;
}

@property (retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue;

- (id)initWithDeferredStartup:(_Bool)arg1;
- (void)executeAfterStartup:(CDUnknownBlockType)arg1;
- (void)enqueueStartupBlock:(CDUnknownBlockType)arg1;

@end
