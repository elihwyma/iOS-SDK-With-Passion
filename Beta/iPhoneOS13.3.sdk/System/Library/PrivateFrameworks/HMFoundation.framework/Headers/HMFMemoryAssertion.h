/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFAssertion.h>

@class NSObject;

@protocol OS_os_transaction;

@interface HMFMemoryAssertion : HMFAssertion

{
    NSObject<OS_os_transaction> *_internal;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *internal;

- (void)invalidate;
- (id)initWithName:(id)arg1;
- (void)mark;

@end
