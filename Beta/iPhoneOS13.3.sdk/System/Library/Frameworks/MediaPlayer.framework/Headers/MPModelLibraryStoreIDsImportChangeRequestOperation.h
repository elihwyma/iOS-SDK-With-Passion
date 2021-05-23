/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibrary, MPModelObject, NSArray;

@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation

{
    _Bool _shouldLibraryAdd;
    MPMediaLibrary *_mediaLibrary;
    MPModelObject *_referralObject;
    NSArray *_storeIDs;
    CDUnknownBlockType _responseHandler;
}

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) MPModelObject *referralObject;
@property (copy, nonatomic) NSArray *storeIDs;
@property (nonatomic) _Bool shouldLibraryAdd;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
