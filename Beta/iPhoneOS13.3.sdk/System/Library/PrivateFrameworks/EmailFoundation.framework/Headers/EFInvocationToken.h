/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString;

@interface EFInvocationToken : NSObject

{
    NSLock *_lock;
    NSMutableArray *_blocks;
    _Bool _isInvoked;
    NSString *_label;
}

@property (readonly, getter=isInvoked) _Bool invoked;
@property (copy, nonatomic, readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_descriptionString;
+ (id)tokenWithLabel:(id)arg1 invocationBlock:(CDUnknownBlockType)arg2;
+ (id)tokenWithInvocationBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)invoke;
- (id)initWithLabel:(id)arg1;
- (void)addInvocationBlock:(CDUnknownBlockType)arg1;
- (void)removeAllInvocationBlocks;
- (id)_nts_consumeBlocks;
- (void)addInvocable:(id)arg1;

@end
