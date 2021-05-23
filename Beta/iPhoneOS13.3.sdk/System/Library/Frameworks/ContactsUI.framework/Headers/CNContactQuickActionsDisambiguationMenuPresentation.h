/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@interface CNContactQuickActionsDisambiguationMenuPresentation : NSObject

+ (id)defaultPresentation;
+ (id)modalPresentation;
+ (id)alertSheetPresentation;

- (id)viewControllerForPresentingActionsController:(id)arg1 fromView:(id)arg2 dismissDisambiguationMenuHandler:(CDUnknownBlockType)arg3;
- (id)initBase;

@end
