/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise

{
    _Bool _executedBlock;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic) _Bool executedBlock;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (_Bool)_runBlock;

@end
