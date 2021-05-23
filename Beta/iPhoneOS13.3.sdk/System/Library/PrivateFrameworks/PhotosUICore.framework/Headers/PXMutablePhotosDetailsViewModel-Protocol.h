/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSSet, PXSectionedSelectionManager;

@protocol PXMutablePhotosDetailsViewModel <Swift>

@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic) _Bool supportsSelection;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (retain, nonatomic) NSSet *disabledActionTypes;

@end
