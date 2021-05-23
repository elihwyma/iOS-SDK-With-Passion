/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNQuickContactAction.h>

@class CNPropertyAction;

__attribute__((visibility("hidden")))
@interface CNQuickPropertyAction : CNQuickContactAction

@property (nonatomic, readonly) CNPropertyAction *propertyAction;

- (_Bool)enabled;
- (id)identifier;
- (unsigned long long)score;
- (id)_coreDuetValue;
- (id)titleForContext:(long long)arg1;
- (id)subtitleForContext:(long long)arg1;
- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithPropertyAction:(id)arg1;
- (id)propertyItem;

@end
