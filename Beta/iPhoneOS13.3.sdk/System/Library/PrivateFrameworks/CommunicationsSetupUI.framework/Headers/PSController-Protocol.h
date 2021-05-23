/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/Swift-Protocol.h>

@protocol PSController <Swift>

- (unsigned short)specifier;
- (unsigned short)setSpecifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setPreferenceValue:specifier: /* Error: Ran out of types for this method. */;
- (unsigned short)readPreferenceValue: /* Error: Ran out of types for this method. */;
- (unsigned short)setParentController: /* Error: Ran out of types for this method. */;
- (unsigned short)parentController;
- (unsigned short)setRootController: /* Error: Ran out of types for this method. */;
- (unsigned short)rootController;
- (unsigned short)showController: /* Error: Ran out of types for this method. */;
- (unsigned short)showController:animate: /* Error: Ran out of types for this method. */;
- (unsigned short)handleURL:withCompletion: /* Error: Ran out of types for this method. */;

+ (unsigned short)validateSpecifier: /* Error: Ran out of types for this method. */;
+ (unsigned short)formatSearchEntries:parent: /* Error: Ran out of types for this method. */;
+ (unsigned short)searchBundle;

- (unsigned short)suspend;
- (unsigned short)handleURL: /* Error: Ran out of types for this method. */;
- (unsigned short)willBecomeActive;
- (unsigned short)willResignActive;
- (unsigned short)prepareHandlingURLForSpecifierID:resourceDictionary:animatePush:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)didLock;
- (unsigned short)willUnlock;
- (unsigned short)didUnlock;
- (unsigned short)didWake;
- (unsigned short)statusBarWillAnimateByHeight: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightSpecifierWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareHandlingURLForSpecifierID:resourceDictionary:animatePush: /* Error: Ran out of types for this method. */;
- (unsigned short)pushController: /* Error: Ran out of types for this method. */;
- (unsigned short)pushController:animate: /* Error: Ran out of types for this method. */;

@end
