/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GeocodeRequest : NSObject

{
    NSMutableArray *_completionHandlers;
}

@property (retain, nonatomic) NSMutableArray *completionHandlers;

- (id)init;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;

@end
