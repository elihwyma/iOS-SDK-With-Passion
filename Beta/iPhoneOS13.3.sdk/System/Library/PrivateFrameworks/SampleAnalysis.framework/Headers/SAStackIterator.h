/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SAStackIterator : NSObject

{
    NSArray *_stack;
}

@property (retain) NSArray *stack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (void)exposeUserFramesOnly;
- (void)exposeKernelFramesOnly;
- (void)exposeAllFrames;

@end
