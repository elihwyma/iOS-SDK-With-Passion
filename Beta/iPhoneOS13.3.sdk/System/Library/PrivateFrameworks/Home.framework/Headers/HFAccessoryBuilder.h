/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFNamingComponents, HFRoomBuilder, HMAccessory, NSArray, NSString;

@protocol HFIconDescriptor;

@interface HFAccessoryBuilder : HFItemBuilder

{
    _Bool isFavorite;
    _Bool _skipPropagateFavoriteToServices;
    NSString *name;
    HFRoomBuilder *room;
    HFNamingComponents *_namingComponent;
}

@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic) _Bool skipPropagateFavoriteToServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) _Bool supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) _Bool isFavorite;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;

+ (Class)homeKitRepresentationClass;

- (id)accessories;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)_performValidation;
- (id)commitItem;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateFavorite;
- (id)removeItemFromHome;

@end
