/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction

{
    NSString *_debugName;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) NSString *debugName;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)_descriptionProem;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (id)_graphNodeDebugName;

@end
