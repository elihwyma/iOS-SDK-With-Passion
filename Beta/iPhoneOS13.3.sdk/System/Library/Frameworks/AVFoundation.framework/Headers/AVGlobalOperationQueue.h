/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface AVGlobalOperationQueue : NSObject

{
    NSOperationQueue *_operationQueue;
}

@property (copy, readonly) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)enqueueOperation:(id)arg1;

@end
