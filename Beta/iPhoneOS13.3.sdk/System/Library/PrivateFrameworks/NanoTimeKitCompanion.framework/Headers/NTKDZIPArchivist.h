/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NTKDZIPArchivist : NSObject

{
    NSObject<OS_dispatch_queue> *_unzipQueue;
}

- (id)init;
- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)zippedDataForPath:(id)arg1;

@end
