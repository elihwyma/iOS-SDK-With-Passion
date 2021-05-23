/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFInvocationToken.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@interface EFCancelationToken : EFInvocationToken <Swift>

@property (readonly, getter=isCanceled) _Bool canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_descriptionString;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;
+ (id)tokenWithLabel:(id)arg1 cancelationBlock:(CDUnknownBlockType)arg2;

- (void)cancel;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (void)addCancelable:(id)arg1;
- (void)removeAllCancelationBlocks;

@end
