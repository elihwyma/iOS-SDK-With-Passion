/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol WFExtensionApplicationContextProviderDelegate;

@interface NSExtensionContext (WFApplicationContextProvider)

@property (weak, nonatomic) id <WFExtensionApplicationContextProviderDelegate> extensionApplicationContextProviderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool wfIdleTimerDisabled;

- (_Bool)shouldReverseLayoutDirection;
- (id)bundleForWFApplicationContext:(id)arg1;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
- (id)keyWindowForWFApplicationContext:(id)arg1;
- (id)applicationForWFApplicationContext:(id)arg1;

@end
