/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Contacts/CNAccount.h>

@class NSString;

@interface CNAccount (UIAdditions)

@property (nonatomic, readonly) NSString *_cnui_displayName;

+ (id)_cnui_accountStore;
+ (id)_cnui_displayNameForLocal;
+ (id)_cnui_displayNameForACAccount:(id)arg1;
+ (void)_cnui_canRequestRefreshWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)_cnui_requestRefreshWithUserAction:(_Bool)arg1;
+ (_Bool)_cnui_isFacebookACAccount:(id)arg1;

@end
