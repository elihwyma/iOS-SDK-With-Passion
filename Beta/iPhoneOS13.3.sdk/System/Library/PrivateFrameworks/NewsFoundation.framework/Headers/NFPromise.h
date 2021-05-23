/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFPromiseSeal;

@interface NFPromise : NSObject

{
    NFPromiseSeal *_seal;
}

@property (retain, nonatomic) NFPromiseSeal *seal;
@property (readonly) CDUnknownBlockType then;
@property (readonly) CDUnknownBlockType thenOn;
@property (readonly) CDUnknownBlockType pipe;
@property (readonly) CDUnknownBlockType pipeOn;
@property (readonly) CDUnknownBlockType error;
@property (readonly) CDUnknownBlockType errorOn;
@property (readonly) CDUnknownBlockType resolve;
@property (readonly) CDUnknownBlockType resolveOn;
@property (readonly) CDUnknownBlockType delay;
@property (readonly) CDUnknownBlockType delayOn;

+ (id)new;
+ (id)firstly:(CDUnknownBlockType)arg1;
+ (id)asVoid;
+ (id)asVoid:(id)arg1;
+ (id)asDelay:(double)arg1 withValue:(id)arg2;
+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3;
+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3;
+ (id)asDelay:(double)arg1 withError:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (id)then:(CDUnknownBlockType)arg1;
- (id)initWithValue:(id)arg1;
- (id)always:(CDUnknownBlockType)arg1;
- (id)thenOn:(id)arg1 then:(CDUnknownBlockType)arg2;
- (id)errorOn:(id)arg1 error:(CDUnknownBlockType)arg2;
- (id)initWithResolver:(CDUnknownBlockType)arg1;
- (id)error:(CDUnknownBlockType)arg1;
- (id)alwaysOn:(id)arg1 always:(CDUnknownBlockType)arg2;

@end
