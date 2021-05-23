/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject

{
    struct OpaqueFigSimpleMutex *_ivarAccessLock;
    NSArray *_blocks;
    struct OpaqueFigReentrantMutex *_blockSerializationLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;

@end
