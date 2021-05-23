/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;

@interface BLTBBObserverDelegate : NSObject

{
    id <BBObserverDelegate> _actualDelegate;
    id <BLTBBObserverDelegateDelegate> _delegate;
}

@property (weak) id <BBObserverDelegate> actualDelegate;
@property (weak, nonatomic) id <BLTBBObserverDelegateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;

@end
