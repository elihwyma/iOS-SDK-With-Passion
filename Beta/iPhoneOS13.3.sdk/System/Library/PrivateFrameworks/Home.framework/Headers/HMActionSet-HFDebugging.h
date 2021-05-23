/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMActionSet.h>

#import <Home/Swift-Protocol.h>

@class NSDate, NSSet, NSString, NSUUID;

@protocol HFIconDescriptor;

@interface HMActionSet (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isFavorite;
@property (nonatomic, readonly) _Bool hf_hasSetFavorite;
@property (nonatomic, readonly) _Bool hf_shouldShowInFavorites;
@property (copy, nonatomic, readonly) NSSet *hf_characteristicWriteActions;
@property (nonatomic, readonly) id <HFIconDescriptor> hf_iconDescriptor;
@property (nonatomic, readonly) _Bool hf_requiresDeviceUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;

+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (_Bool)hf_isAnonymous;
- (id)hf_affectedCharacteristics;
- (id)hf_shortcutAction;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_affectedServices;
- (id)hf_affectedMediaSessions;
- (_Bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (_Bool)hf_isShortcutOwned;

@end
