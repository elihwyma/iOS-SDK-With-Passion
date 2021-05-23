/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _RECallbackAndPreviousStatus : NSObject

{
    int _status;
    CDUnknownBlockType _invalidationCallback;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) int status;
@property (copy, nonatomic) CDUnknownBlockType invalidationCallback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

@end
