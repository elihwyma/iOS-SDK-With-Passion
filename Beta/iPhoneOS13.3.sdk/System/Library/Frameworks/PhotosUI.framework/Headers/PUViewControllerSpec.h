/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, PUViewControllerSpecChange, UITraitCollection;

@interface PUViewControllerSpec : NSObject

{
    _Bool _presentedForSecondScreen;
    _Bool _prefersCompactLayoutForSplitScreen;
    _Bool __needsUpdateLayoutStyle;
    UITraitCollection *_traitCollection;
    NSHashTable *__changeObservers;
    long long __changeCount;
    long long _currentLayoutStyle;
    PUViewControllerSpecChange *_currentChange;
    struct CGSize _layoutReferenceSize;
    struct CGSize _secondScreenSize;
}

@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (nonatomic, setter=_setChangeCount:) long long _changeCount;
@property (nonatomic, setter=_setNeedsUpdateLayoutStyle:) _Bool _needsUpdateLayoutStyle;
@property (nonatomic, readonly) long long currentLayoutStyle;
@property (nonatomic, readonly) PUViewControllerSpecChange *currentChange;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize layoutReferenceSize;
@property (nonatomic, getter=isPresentedForSecondScreen) _Bool presentedForSecondScreen;
@property (nonatomic) struct CGSize secondScreenSize;
@property (nonatomic) _Bool prefersCompactLayoutForSplitScreen;

- (id)init;
- (void)_willChange;
- (void)_didChange;
- (void)updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)_publishChange:(id)arg1;
- (void)_setCurrentChange:(id)arg1;
- (id)newSpecChange;
- (void)assertInsideChangesBlock;
- (void)_invalidateLayoutStyle;
- (struct CGSize)_portraitOrientedSizeForSize:(struct CGSize)arg1;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)_setCurrentLayoutStyle:(long long)arg1;

@end
