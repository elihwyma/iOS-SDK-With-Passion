/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMAccessoryProfile.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@protocol HFIconDescriptor;

@interface HMAccessoryProfile (HFAdditions) <Swift>

@property (nonatomic, readonly) id <HFIconDescriptor> hf_iconDescriptor;
@property (nonatomic, readonly) _Bool hf_hasNonStandardTileUI;
@property (nonatomic, readonly) _Bool hf_offersAutomation;
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

+ (id)_profilesWithNonStandardTileUI;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (_Bool)hf_isValidObject;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (id)hf_parentRoom;

@end
