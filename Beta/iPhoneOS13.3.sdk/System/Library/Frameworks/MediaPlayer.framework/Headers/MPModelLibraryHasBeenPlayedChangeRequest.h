/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibrary, MPModelObject;

@interface MPModelLibraryHasBeenPlayedChangeRequest : NSObject

{
    _Bool _hasBeenPlayed;
    MPMediaLibrary *_mediaLibrary;
    MPModelObject *_model;
}

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MPModelObject *model;
@property (nonatomic) _Bool hasBeenPlayed;

- (id)initWithModel:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
