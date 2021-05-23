/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@protocol CNUIUserActionListDataSource <Swift>

@property (nonatomic) _Bool tracksChanges;

+ (unsigned short)allActionTypes;
+ (unsigned short)allSupportedActionTypes;
+ (unsigned short)allSupportedActionTypesWithCapabilities: /* Error: Ran out of types for this method. */;

- (unsigned short)setContact: /* Error: Ran out of types for this method. */;
- (unsigned short)actionTypesForConsumer: /* Error: Ran out of types for this method. */;
- (unsigned short)consumer:actionModelsForActionType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)consumer:actionModelsForActionType: /* Error: Ran out of types for this method. */;
- (unsigned short)consumer:localizedDisplayNameForActionType: /* Error: Ran out of types for this method. */;
- (unsigned short)consumer:localizedButtonDisplayNameForActionType: /* Error: Ran out of types for this method. */;
- (unsigned short)consumer:localizedDisplayNameForButtonWithDefaultAction:actionType: /* Error: Ran out of types for this method. */;
- (unsigned short)consumer:imageForActionType: /* Error: Ran out of types for this method. */;
- (unsigned short)thirdPartyTargetsForActionTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)thirdPartyActionsForContactProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)thirdPartyActionsForCurrentContactAndPropertyKey:identifier: /* Error: Ran out of types for this method. */;

@end
