/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelResponse.h>

@class MPSectionedCollection, NSString;

@interface MPStoreLibraryPersonalizationResponse : MPModelResponse

{
    MPSectionedCollection *_representedObjectResults;
    MPModelResponse *_libraryResponse;
}

@property (retain, nonatomic) MPSectionedCollection *representedObjectResults;
@property (retain, nonatomic) MPModelResponse *libraryResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_libraryResponseDidInvalidateNotification:(id)arg1;

@end
