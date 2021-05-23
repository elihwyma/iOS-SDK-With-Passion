/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFMutableSetDiff, HMZone, NSSet, NSString;

@interface HFZoneBuilder : HFItemBuilder

{
    NSString *_name;
    HFMutableSetDiff *_roomUUIDs;
}

@property (retain, nonatomic) HFMutableSetDiff *roomUUIDs;
@property (nonatomic, readonly) HMZone *zone;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSSet *rooms;

+ (id)na_identity;
+ (Class)homeKitRepresentationClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setZone:(id)arg1;
- (id)_updateName;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)_performValidation;
- (id)commitItem;
- (id)_updateRooms;
- (id)_createZone;
- (void)addRoom:(id)arg1;
- (void)removeRoom:(id)arg1;

@end
