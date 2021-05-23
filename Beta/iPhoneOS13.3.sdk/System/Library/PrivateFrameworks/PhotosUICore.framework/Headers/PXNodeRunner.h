/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface PXNodeRunner : NSObject

{
    NSOperationQueue *_operationQueue;
}

@property long long maxConcurrentRunNodeCount;
@property long long qualityOfService;

- (id)init;
- (void)processGraphForRunNode:(id)arg1;
- (void)_processRunGraph:(struct NSArray *)arg1;

@end
