/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFPromise;

@interface NFPendingPromise : NSObject

{
    NFPromise *_promise;
    CDUnknownBlockType _resolve;
    CDUnknownBlockType _reject;
}

@property (retain, nonatomic) NFPromise *promise;
@property (copy, nonatomic) CDUnknownBlockType resolve;
@property (copy, nonatomic) CDUnknownBlockType reject;

- (id)init;

@end
