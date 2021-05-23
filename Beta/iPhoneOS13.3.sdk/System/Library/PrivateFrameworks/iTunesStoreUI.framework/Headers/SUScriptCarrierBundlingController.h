/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCarrierBundlingController : SUScriptObject

@property (readonly) NSString *provisioningStyleAlways;
@property (readonly) NSString *provisioningStyleNever;
@property (readonly) NSString *provisioningStyleOnce;
@property (readonly) NSString *statusEligible;
@property (readonly) NSString *statusNeedsManualVerification;
@property (readonly) NSString *statusNotEligible;
@property (readonly) NSString *statusUnknown;
@property (readonly) NSString *statusUnlinked;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)updateLastKnownStatus:(id)arg1;

@end
