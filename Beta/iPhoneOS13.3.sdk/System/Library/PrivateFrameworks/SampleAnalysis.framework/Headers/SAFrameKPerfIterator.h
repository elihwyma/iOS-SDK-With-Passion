/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SAFrame, SAKernelFrame, SAKernelLeafFrame, SALeafFrame, SASharedCache;

__attribute__((visibility("hidden")))
@interface SAFrameKPerfIterator : NSObject

{
    SAFrame *_user;
    SALeafFrame *_userLeaf;
    SAKernelFrame *_kernel;
    SAKernelLeafFrame *_kernelLeaf;
    _Bool _hideKernelFrames;
    _Bool _hideUserFrames;
    unsigned int _numUserFrames;
    unsigned int _numKernelFrames;
    NSArray *_userBinaryLoadInfos;
    NSArray *_kernelBinaryLoadInfos;
    SASharedCache *_sharedCache;
    const unsigned long long *_userFrames;
    const unsigned long long *_kernelFrames;
    unsigned long long _continuation;
}

@property (retain) NSArray *userBinaryLoadInfos;
@property (retain) NSArray *kernelBinaryLoadInfos;
@property (retain) SASharedCache *sharedCache;
@property const unsigned long long *userFrames;
@property unsigned int numUserFrames;
@property const unsigned long long *kernelFrames;
@property unsigned int numKernelFrames;
@property unsigned long long continuation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (id)instructionForUserAddress:(unsigned long long)arg1 symbolicationOffByOne:(_Bool)arg2;
- (id)instructionForKernelAddress:(unsigned long long)arg1 symbolicationOffByOne:(_Bool)arg2;
- (void)clearThreadData;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;
- (void)clearTaskData;
- (_Bool)hasUserStack;
- (_Bool)hasKernelStack;

@end
