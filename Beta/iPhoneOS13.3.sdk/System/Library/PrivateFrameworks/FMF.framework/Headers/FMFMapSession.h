/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <Foundation/NSObject.h>

@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject

{
    FMFMapCache *_mapCache;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) FMFMapCache *mapCache;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)newConnection;

- (void)mapImageForRequest:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)gridImageForScreenRatio:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(_Bool)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(_Bool)arg6 andCompletion:(CDUnknownBlockType)arg7;

@end
