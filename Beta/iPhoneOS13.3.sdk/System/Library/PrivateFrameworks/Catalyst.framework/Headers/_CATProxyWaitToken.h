/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _CATProxyWaitToken : NSObject

{
    _Atomic _Bool mFinished;
    NSObject<OS_dispatch_group> *mGroup;
    _Bool _isExclusive;
    id _resourceProxy;
}

@property (nonatomic, readonly) _Bool isExclusive;
@property (nonatomic, readonly) id resourceProxy;

- (void)dealloc;
- (void)invalidate;
- (void)cancel;
- (id)initWithExclusive:(_Bool)arg1 group:(id)arg2;
- (void)notifyWithResourceProxy:(id)arg1;

@end
