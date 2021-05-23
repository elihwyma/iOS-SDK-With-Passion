/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSString, SUInstallationConstraintObserver;

@interface _SUInstallationConstraintBlockObserverToken : NSObject

{
    SUInstallationConstraintObserver *_observer;
    _Bool _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)initWithObserver:(id)arg1;

@end
