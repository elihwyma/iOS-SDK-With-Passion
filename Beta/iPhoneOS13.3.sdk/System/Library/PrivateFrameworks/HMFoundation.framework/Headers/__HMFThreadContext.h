/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSObject, NSThread;

@protocol OS_voucher;

__attribute__((visibility("hidden")))
@interface __HMFThreadContext

{
    _Bool _shouldRestoreVoucher;
    NSThread *_thread;
    unsigned long long _count;
    NSObject<OS_voucher> *_voucher;
}

@property (readonly) NSThread *thread;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (nonatomic) _Bool shouldRestoreVoucher;

+ (id)currentContext;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)__init;

@end
