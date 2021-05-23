/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBNetworkReselectionController : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void)_test;
- (void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2;
- (void)_handleNetworkReselectionNeeded:(_Bool)arg1 forSlot:(long long)arg2;

@end
