/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@class CUTResult, NSArray;

@interface ENAsyncReducer : NSObject

{
    NSArray *_input;
    CUTResult *_result;
    CDUnknownBlockType _reducerBlock;
    CDUnknownBlockType _completionBlock;
}

@property (retain, nonatomic) NSArray *input;
@property (retain, nonatomic) CUTResult *result;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType reducerBlock;

- (void)_completeWithResult:(id)arg1;
- (void)_reduceWithPending:(id)arg1 visited:(id)arg2 currentResult:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithInput:(id)arg1 initialValue:(id)arg2;
- (void)reduceWithCompletion:(CDUnknownBlockType)arg1;

@end
