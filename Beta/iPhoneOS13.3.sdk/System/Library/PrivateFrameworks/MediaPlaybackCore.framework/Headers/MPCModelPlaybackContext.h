/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPPlaybackContext.h>

@class ICUserIdentity, MPCPlaybackRequestEnvironment, MPIdentifierSet, MPModelGenericObject, MPModelRequest, NSDictionary, NSString;

@interface MPCModelPlaybackContext : MPPlaybackContext

{
    _Bool _skipEncodingMediaLibraryUniqueID;
    ICUserIdentity *_userIdentity;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPModelRequest *_request;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
    NSDictionary *_assetStoreFronts;
    MPModelGenericObject *_fallbackSectionRepresentation;
    NSString *_encodedMediaLibraryUniqueID;
}

@property (copy, nonatomic, readonly) NSString *encodedMediaLibraryUniqueID;
@property (nonatomic) _Bool skipEncodingMediaLibraryUniqueID;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;
@property (copy, nonatomic) NSDictionary *startTimeModifications;
@property (copy, nonatomic) NSDictionary *endTimeModifications;
@property (copy, nonatomic) NSDictionary *assetStoreFronts;
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) ICUserIdentity *userIdentity;

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;
+ (id)requiredPropertiesForStaticMediaClips;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isSupported;
- (id)descriptionComponents;
- (_Bool)containsRestorableContent;
- (void)clearStartItem;
- (void)setPrivateListeningOverride:(id)arg1;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
