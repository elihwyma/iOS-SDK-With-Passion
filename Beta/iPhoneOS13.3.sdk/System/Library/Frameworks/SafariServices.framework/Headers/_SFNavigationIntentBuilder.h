/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface _SFNavigationIntentBuilder : NSObject

{
    _Bool _prefersOpenInNewTab;
    _Bool _prefersOpenInNewWindow;
    _Bool _prefersRelationToSourceTab;
    long long _modifierFlags;
    long long _navigationType;
    long long _preferredTabOrder;
}

@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic) long long navigationType;
@property (nonatomic) long long preferredTabOrder;
@property (nonatomic) _Bool prefersOpenInNewTab;
@property (nonatomic) _Bool prefersOpenInNewWindow;
@property (nonatomic) _Bool prefersRelationToSourceTab;

+ (id)builder;
+ (_Bool)canCreateNavigationIntentForDropSession:(id)arg1;
+ (id)builderWithModifierFlags:(long long)arg1;
+ (void)registerBookmarkCollectionFactory:(CDUnknownBlockType)arg1;

- (id)navigationIntentWithBookmark:(id)arg1;
- (id)navigationIntentWithText:(id)arg1;
- (void)buildNavigationIntentForDropSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithModifierFlags:(long long)arg1;
- (long long)_navigationPolicy;
- (id)_initializeNavigationIntentWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)navigationIntentWithMultipleIntents:(id)arg1;
- (id)_navigationIntentWithItems:(id)arg1;
- (id)_navigationIntentForMKMapItem:(id)arg1;
- (id)navigationIntentWithRecentlyClosedTabStateData:(id)arg1;
- (long long)_navigationPolicyForStandardEvent;
- (long long)_navigationPolicyForNavigationEvent;
- (_Bool)_hasModifierFlag:(long long)arg1;
- (_Bool)_modifiersEqualToModifierIgnoringCapsLock:(long long)arg1;
- (long long)_navigationPolicyForCreatingNewTabOrWindow;
- (_Bool)_shouldOrderToForeground;
- (id)navigationIntentWithCloudTab:(id)arg1;
- (id)navigationIntentWithHistoryURL:(id)arg1;
- (id)navigationIntentWithURL:(id)arg1;
- (id)navigationIntentWithOpenURLContexts:(id)arg1;
- (void)buildNavigationIntentForItemProviders:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
