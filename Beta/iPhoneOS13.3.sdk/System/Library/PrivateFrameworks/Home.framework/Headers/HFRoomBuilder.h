/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HFWallpaperEditCollectionBuilder, HMRoom, NSSet, NSString;

@interface HFRoomBuilder : HFItemBuilder

{
    NSString *_name;
    HFWallpaperEditCollectionBuilder *_wallpaperBuilder;
    HFMutableSetDiff *_accessoryUUIDs;
}

@property (retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder;
@property (retain, nonatomic) HFMutableSetDiff *accessoryUUIDs;
@property (nonatomic, readonly) HMRoom *room;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSSet *accessories;

+ (Class)homeKitRepresentationClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_updateAccessories;
- (void)addAccessory:(id)arg1;
- (void)setRoom:(id)arg1;
- (id)_updateName;
- (void)removeAccessory:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)_performValidation;
- (id)commitItem;
- (id)_createRoom;

@end
