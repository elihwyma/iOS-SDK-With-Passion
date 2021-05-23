/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class CIContext, NSHashTable, NSLock;

@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface VNImageBufferManager : NSObject

{
    CIContext *mainCIContext;
    id <MTLDevice> mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id <MTLDevice> lowPriorityCIContextMetalDevice;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;

- (id)init;
- (void)dealloc;
- (void)purgeAllCaches;
- (void)addImageBuffer:(id)arg1;
- (void)removeBuffer:(id)arg1;
- (id)sharedCIContextWithOptions:(id)arg1;

@end
