/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface FMCancelationToken : NSObject

{
    _Bool _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)cancel;
- (_Bool)isCanceled;
- (void)addCancelationBlock:(CDUnknownBlockType)arg1;
- (void)addCancelable:(id)arg1;
- (id)nts_cancel;
- (void)callCancelationBlocks:(id)arg1;

@end
