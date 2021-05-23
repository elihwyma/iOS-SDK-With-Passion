/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject

{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id)analysisService;
+ (id)errorWithStatus:(int)arg1 andDescription:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)connection;
- (void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(struct __CVBuffer *)arg2 withProperties:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end
