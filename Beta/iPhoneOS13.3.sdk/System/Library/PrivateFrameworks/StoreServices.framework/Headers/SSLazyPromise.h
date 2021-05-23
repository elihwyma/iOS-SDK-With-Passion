/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSPromise.h>

@class NSLock;

@interface SSLazyPromise : SSPromise

{
    _Bool _executedBlock;
    CDUnknownBlockType _block;
    NSLock *_executeBlockLock;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSLock *executeBlockLock;
@property (nonatomic) _Bool executedBlock;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (_Bool)_runBlock;

@end
