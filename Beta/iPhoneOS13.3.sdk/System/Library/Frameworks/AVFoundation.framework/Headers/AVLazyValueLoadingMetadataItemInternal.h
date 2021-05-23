/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMetadataItemValueRequest, NSError, NSMutableArray, NSString;

@protocol NSObject><NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItemInternal : NSObject

{
    id <NSObject><NSCopying> value;
    NSString *dataType;
    AVMetadataItemValueRequest *valueRequest;
    CDUnknownBlockType valueLoadingHandler;
    long long valueStatus;
    NSError *valueLoadingError;
    NSMutableArray *loadingCompletionHandlers;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end
