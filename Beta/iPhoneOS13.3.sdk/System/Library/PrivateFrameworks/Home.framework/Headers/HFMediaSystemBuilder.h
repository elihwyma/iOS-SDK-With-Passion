/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFAppleMusicAccountArbitrator, HFNamingComponents, HFRoomBuilder, HMAccessory, HMMediaSystem, HMMediaSystemBuilder, NSArray, NSString;

@protocol HFIconDescriptor;

@interface HFMediaSystemBuilder : HFItemBuilder

{
    _Bool _isFavorite;
    _Bool _hasSetRoom;
    _Bool _isCreatingMediaSystem;
    id <HFIconDescriptor> _iconDescriptor;
    HFAppleMusicAccountArbitrator *_accountArbitrator;
    HMAccessory *_firstSetupSourceAccessory;
    HMMediaSystemBuilder *_homeKitMediaSystemBuilder;
    HFNamingComponents *_namingComponent;
    HFRoomBuilder *_roomBuilder;
}

@property (retain, nonatomic) HMMediaSystemBuilder *homeKitMediaSystemBuilder;
@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (nonatomic) _Bool hasSetRoom;
@property (nonatomic) _Bool isCreatingMediaSystem;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HFAppleMusicAccountArbitrator *accountArbitrator;
@property (nonatomic, readonly) HMAccessory *firstSetupSourceAccessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) _Bool supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) _Bool isFavorite;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;

+ (Class)homeKitRepresentationClass;

- (id)accessories;
- (void)addAccessory:(id)arg1;
- (id)_defaultName;
- (void)removeAccessory:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)removeItemFromHome;
- (id)accessoryForRole:(id)arg1;
- (_Bool)shouldAllowAddingAccessory:(id)arg1;
- (id)_firstUnpopulatedRole;
- (void)addAccessory:(id)arg1 role:(id)arg2;
- (id)roleForAccessory:(id)arg1;
- (id)_updateRoom;
- (id)_commitChangesToMediaSystemBuilder;
- (id)_updateFavorite;
- (id)_updateAssistantAccessControl;
- (void)setMediaSystem:(id)arg1;
- (_Bool)swapRoles;
- (id)_rooms;

@end
