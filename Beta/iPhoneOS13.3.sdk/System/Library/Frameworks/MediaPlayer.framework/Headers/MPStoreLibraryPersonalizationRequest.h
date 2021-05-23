/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelRequest.h>

@class ICUserIdentity, MPSectionedCollection, NSDictionary, NSMutableDictionary, NSString;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest

{
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
    ICUserIdentity *_userIdentity;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
    MPSectionedCollection *_representedObjects;
}

@property (copy, nonatomic, readonly) NSDictionary *itemIndexPathToOverridePropertySet;
@property (nonatomic, readonly) MPSectionedCollection *unpersonalizedContentDescriptors;
@property (retain, nonatomic) MPSectionedCollection *representedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) ICUserIdentity *userIdentity;

+ (_Bool)supportsSecureCoding;
+ (_Bool)requiresNetwork;
+ (id)preferredQueue;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)libraryViewWithUserIdentity:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithUnpersonalizedContentDescriptors:(id)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;
- (id)propertiesForItemAtIndexPath:(id)arg1;
- (void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2;

@end
