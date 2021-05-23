/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPModelObject;

@interface MPModelLibraryDeleteEntityChangeRequest : NSObject <Swift>

{
    MPModelObject *_modelObject;
}

@property (retain, nonatomic) MPModelObject *modelObject;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end
