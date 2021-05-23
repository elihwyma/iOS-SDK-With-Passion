/*
 Image: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CSStore : NSObject

{
    struct Store _store;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (void)initialize;
+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (id)initByMovingStore:(struct Store *)arg1;
- (id)initWithError:(id *)arg1;
- (void)setExpectedAccessQueue:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1 error:(id *)arg2;

@end
