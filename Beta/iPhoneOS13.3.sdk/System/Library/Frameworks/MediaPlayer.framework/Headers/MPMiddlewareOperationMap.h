/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject

{
    NSMapTable *_middlewareOperationMap;
    NSMutableArray *_middleware;
    NSMutableArray *_operations;
}

+ (id)mapForRequest:(id)arg1;

- (id)_init;
- (id)operationsForMiddleware:(id)arg1;
- (id)allMiddleware;
- (id)allOperations;

@end
