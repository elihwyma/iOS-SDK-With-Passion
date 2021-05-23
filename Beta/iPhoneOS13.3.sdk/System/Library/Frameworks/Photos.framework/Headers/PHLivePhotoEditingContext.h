/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class CIImage, ISEditSession;

@interface PHLivePhotoEditingContext : NSObject

{
    ISEditSession *_editSession;
}

@property (readonly) CIImage *fullSizeImage;
@property (readonly) CDStruct_1b6d18a9 duration;
@property (readonly) CDStruct_1b6d18a9 photoTime;
@property (copy) CDUnknownBlockType frameProcessor;
@property float audioVolume;
@property (readonly) unsigned int orientation;

+ (id)errorWithUnderlyingError:(id)arg1;

- (id)init;
- (void)cancel;
- (id)initWithLivePhotoEditingInput:(id)arg1;
- (void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
