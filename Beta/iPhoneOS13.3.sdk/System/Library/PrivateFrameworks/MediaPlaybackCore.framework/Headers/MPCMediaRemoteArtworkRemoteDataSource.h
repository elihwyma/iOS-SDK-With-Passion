/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCMediaRemoteController, NSString;

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject

{
    MPCMediaRemoteController *_controller;
}

@property (weak, nonatomic, readonly) MPCMediaRemoteController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithController:(id)arg1;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
