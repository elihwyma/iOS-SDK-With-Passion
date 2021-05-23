/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface GraphRenderer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _cancelled;
}

+ (void)clearSharedRenderer;
+ (id)sharedRenderer;

- (id)init;
- (void)performRenderOperation:(id)arg1;

@end
