/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REBlockSentinel : NSObject

{
    _Bool _completed;
    CDUnknownBlockType _failureBlock;
}

@property (getter=isCompleted) _Bool completed;
@property (nonatomic, readonly) CDUnknownBlockType failureBlock;

- (id)init;
- (void)dealloc;
- (void)complete;
- (id)initWithFailureBlock:(CDUnknownBlockType)arg1;

@end
