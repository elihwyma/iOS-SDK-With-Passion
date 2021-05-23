/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface PFCanceler : NSObject

{
    NSObject<OS_dispatch_queue> *_serializer;
    _Bool _isCanceled;
    struct PFAsyncDispatchMulticaster *_multicaster;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsNotifyOnCancel;

- (id)init;
- (void)cancel;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isCanceled;

@end
