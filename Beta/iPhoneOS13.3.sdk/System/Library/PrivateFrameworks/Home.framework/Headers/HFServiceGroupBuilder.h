/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HFRoomBuilder, HMServiceGroup, NSArray, NSString;

@protocol HFIconDescriptor;

@interface HFServiceGroupBuilder : HFItemBuilder

{
    _Bool isFavorite;
    _Bool _hasSetRoom;
    _Bool _hasSetIcon;
    id <HFIconDescriptor> _iconDescriptor;
    NSString *_name;
    HFMutableSetDiff *_serviceUUIDs;
    HFRoomBuilder *_roomBuilder;
}

@property (nonatomic, readonly) HFMutableSetDiff *serviceUUIDs;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (nonatomic) _Bool hasSetRoom;
@property (nonatomic) _Bool hasSetIcon;
@property (nonatomic, readonly) HMServiceGroup *serviceGroup;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSArray *services;
@property (nonatomic, readonly) NSString *primaryServiceType;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) _Bool supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) _Bool isFavorite;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;

+ (Class)homeKitRepresentationClass;

- (id)accessories;
- (void)addService:(id)arg1;
- (void)removeService:(id)arg1;
- (id)_updateName;
- (void)setServiceGroup:(id)arg1;
- (id)_updateIcon;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)_performValidation;
- (id)commitItem;
- (id)removeItemFromHome;
- (id)_updateFavorite;
- (id)_rooms;
- (_Bool)shouldAllowAddingService:(id)arg1;
- (id)_createServiceGroup;
- (id)_updateRooms;
- (id)_updateServices;
- (id)_mostCommonIconDescriptor;
- (_Bool)_supportsCustomIcons;

@end
