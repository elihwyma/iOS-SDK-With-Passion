/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MPArtworkCatalogStaticDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDataSource;

- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
