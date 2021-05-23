/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFNamingComponents, HFRoomBuilder, HMService, NSArray, NSString;

@protocol HFIconDescriptor;

@interface HFServiceBuilder : HFItemBuilder

{
    _Bool isFavorite;
    NSString *name;
    HFRoomBuilder *room;
    id <HFIconDescriptor> _iconDescriptor;
    NSString *_associatedServiceType;
    long long _configurationState;
    NSString *_accessoryName;
    HFNamingComponents *_namingComponent;
}

@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (nonatomic, readonly) HMService *service;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property (copy, nonatomic) NSString *associatedServiceType;
@property (nonatomic) long long configurationState;
@property (copy, nonatomic) NSString *accessoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) _Bool supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) _Bool isFavorite;
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
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateDateAdded;
- (id)_lazilyUpdateAssociatedServiceType;
- (id)_lazilyUpdateConfigurationState;

@end
