/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSString, PHCollection, PUAlbumListCellContentView, PUAlbumListCellContentViewHelper, PXGadgetSpec;

@protocol PUAlbumGadgetDelegate, PXGadgetDelegate;

__attribute__((visibility("hidden")))
@interface PUAlbumGadget : NSObject

{
    _Bool _contentViewVisible;
    _Bool _needsUpdate;
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    PUAlbumListCellContentView *_albumListCellContentView;
    PHCollection *_collection;
    id <PUAlbumGadgetDelegate> _albumGadgetDelegate;
    NSIndexSet *_indexesOfHiddenStackItems;
}

@property (nonatomic, readonly) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
@property (nonatomic, getter=isContentViewVisible) _Bool contentViewVisible;
@property (nonatomic) _Bool needsUpdate;
@property (retain, nonatomic) PHCollection *collection;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) PUAlbumListCellContentView *albumListCellContentView;
@property (weak, nonatomic) id <PUAlbumGadgetDelegate> albumGadgetDelegate;
@property (copy, nonatomic) NSIndexSet *indexesOfHiddenStackItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id <PXGadgetDelegate> delegate;
@property (nonatomic, readonly) _Bool hasContentToDisplay;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) _Bool supportsHighlighting;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, readonly) _Bool supportsAssetsDrop;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) struct CGRect visibleContentRect;

- (id)init;
- (struct NSObject *)contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateContent;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)contentViewWillAppear;
- (void)contentViewDidDisappear;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (void)reconfigure;
- (struct CGRect)rectForStackItemAtIndex:(long long)arg1 inCoordinateSpace:(id)arg2;
- (long long)estimatedIndexInCollection:(id)arg1 ofAssetForStackItemAtIndex:(long long)arg2;

@end
