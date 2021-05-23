/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibrary, MPModelKind, MPModelObject;

@interface MPModelLibraryHasPurchasesRequest : NSObject

{
    MPModelObject *_modelObject;
    MPMediaLibrary *_mediaLibrary;
    MPModelKind *_itemKind;
}

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) MPModelKind *itemKind;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
