/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSSet, NSString, PXSectionedSelectionManager;

@interface PXPhotosDetailsViewModel : PXObservable

{
    _Bool _selecting;
    _Bool _supportsSelection;
    _Bool _supportsFaceMode;
    _Bool _faceModeEnabled;
    PXSectionedSelectionManager *_selectionManager;
    NSSet *_disabledActionTypes;
}

@property (nonatomic, readonly, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, readonly, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) NSSet *disabledActionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setSelecting:(_Bool)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)setFaceModeEnabled:(_Bool)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setDisabledActionTypes:(id)arg1;
- (void)setSupportsSelection:(_Bool)arg1;
- (void)setSupportsFaceMode:(_Bool)arg1;

@end
