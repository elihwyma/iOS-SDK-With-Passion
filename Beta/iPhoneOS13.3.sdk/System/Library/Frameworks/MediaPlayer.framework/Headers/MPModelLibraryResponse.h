/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelResponse.h>

@class MPMediaLibraryConnectionAssertion, NSArray, NSString;

@interface MPModelLibraryResponse : MPModelResponse

{
    NSArray *_sectionKeepLocalStatusConfigurations;
    MPMediaLibraryConnectionAssertion *_libraryAssertion;
}

@property (copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations;
@property (retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;

@end
