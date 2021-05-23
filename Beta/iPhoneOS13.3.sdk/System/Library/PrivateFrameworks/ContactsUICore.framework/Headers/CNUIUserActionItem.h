/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactProperty, NSDictionary, NSString;

@interface CNUIUserActionItem : NSObject

{
    NSString *_type;
    NSString *_bundleIdentifier;
    CNContactProperty *_contactProperty;
    NSString *_label;
    long long _group;
    unsigned long long _options;
    NSString *_teamIdentifier;
    NSDictionary *_associatedRecentContactMetadata;
}

@property (retain, nonatomic) NSString *label;
@property (nonatomic, readonly) long long group;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *associatedRecentContactMetadata;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *targetHandle;
@property (nonatomic, readonly) NSString *sanitizedTargetHandle;
@property (nonatomic, readonly) CNContactProperty *contactProperty;
@property (nonatomic, readonly) _Bool shouldGroupByBundleIdentifier;
@property (nonatomic, readonly) _Bool shouldCurateIfPerformed;
@property (nonatomic, readonly) _Bool isSuggested;

+ (id)workspace;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 isSuggested:(_Bool)arg5;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(_Bool)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)payItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)textItemWithLabel:(id)arg1 targetPhoneNumber:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)ttyItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)ttyRelayItemWithLabel:(id)arg1 targetStringValue:(id)arg2 url:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)payItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)emailItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4;
+ (id)textItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 userActivity:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 userActivity:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)itemWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 isSuggested:(_Bool)arg5;
+ (id)_voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)videoItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 dialRequest:(id)arg3 bundleIdentifier:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
+ (id)voiceItemWithLabel:(id)arg1 targetStringValue:(id)arg2 propertyKey:(id)arg3 dialRequest:(id)arg4 bundleIdentifier:(id)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
+ (id)actionItemForContactProperty:(id)arg1 actionType:(id)arg2 bundleIdentifier:(id)arg3 callProviderManager:(id)arg4;
+ (id)thirdPartyCallActionItemForHandle:(id)arg1 contactProperty:(id)arg2 actionType:(id)arg3 bundleIdentifier:(id)arg4 callProviderManager:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)url;
- (id)performActionWithContext:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 group:(long long)arg4 options:(unsigned long long)arg5;
- (_Bool)shouldUseLabelForQuickActionButtonTitle;
- (_Bool)isHandledByFirstPartyApp;
- (_Bool)shouldUseApplicationNameForLabel;
- (void)associateWithRecentContactMetadata:(id)arg1;
- (id)initWithItem:(id)arg1 contactProperty:(id)arg2;

@end
