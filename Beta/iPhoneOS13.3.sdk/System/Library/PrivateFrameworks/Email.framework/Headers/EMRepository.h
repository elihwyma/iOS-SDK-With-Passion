/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EFFuture, Protocol;

@protocol EFScheduler;

@interface EMRepository : NSObject

{
    id <EFScheduler> _observerScheduler;
    Protocol *_interfaceProtocol;
    EFFuture *_interfaceFuture;
}

@property (retain, nonatomic) id <EFScheduler> observerScheduler;
@property (readonly) Protocol *interfaceProtocol;
@property (readonly) EFFuture *interfaceFuture;

- (id)initInternal;
- (id)performQuery:(id)arg1 withObserver:(id)arg2;
- (id)trampoliningObserverForObserver:(id)arg1;
- (void)prepareRepositoryObjects:(id)arg1;

@end
