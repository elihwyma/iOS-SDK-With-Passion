/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibrary, MPModelObject;

@interface MPModelLibraryIncrementPlayCountChangeRequest : NSObject

{
    MPMediaLibrary *_mediaLibrary;
    MPModelObject *_model;
}

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly) MPModelObject *model;

- (id)initWithModel:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
