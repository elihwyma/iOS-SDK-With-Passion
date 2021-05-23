/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSPointerArray, NSString, PHAssetCollection, PUPhotoSelectionManager;

@protocol PLAlbumProtocol;

@interface PUSessionInfo : NSObject

{
    NSPointerArray *_observers;
    _Bool _selectingAssets;
    _Bool _selectingTargetAlbum;
    _Bool _enforcesSelectionLimitByDelesectingOtherAssets;
    _Bool _showsFileSizePicker;
    long long _status;
    PUPhotoSelectionManager *_photoSelectionManager;
    PHAssetCollection *_sourceAlbum;
    NSOrderedSet *_transferredAssets;
    struct NSObject *_targetAlbum;
    NSString *_targetAlbumName;
    NSString *_localizedPrompt;
    long long _promptLocation;
    CDUnknownBlockType _bannerGenerator;
    unsigned long long _selectionLimit;
}

@property (retain, nonatomic) PHAssetCollection *sourceAlbum;
@property (copy, nonatomic) NSOrderedSet *transferredAssets;
@property (retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager;
@property (copy, nonatomic) NSString *localizedPrompt;
@property (nonatomic) long long promptLocation;
@property (copy, nonatomic) CDUnknownBlockType bannerGenerator;
@property (nonatomic) long long status;
@property (nonatomic, readonly, getter=isSelectingAssets) _Bool selectingAssets;
@property (nonatomic, readonly, getter=isSelectingTargetAlbum) _Bool selectingTargetAlbum;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *targetAlbum;
@property (retain, nonatomic) NSString *targetAlbumName;
@property (nonatomic) unsigned long long selectionLimit;
@property (nonatomic) _Bool enforcesSelectionLimitByDelesectingOtherAssets;
@property (nonatomic) _Bool showsFileSizePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (void)removeSessionInfoObserver:(id)arg1;
- (_Bool)hasLocalTargetAlbum;
- (_Bool)hasTargetAlbum;

@end
