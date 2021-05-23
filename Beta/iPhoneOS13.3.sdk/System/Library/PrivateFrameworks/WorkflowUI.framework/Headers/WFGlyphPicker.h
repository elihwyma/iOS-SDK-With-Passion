/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, WFGlyphPickerTabBar;

@protocol WFGlyphPickerDelegate;

@interface WFGlyphPicker : UIView <Swift>

{
    unsigned short _selectedGlyphCharacter;
    id <WFGlyphPickerDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSArray *_glyphSections;
    WFGlyphPickerTabBar *_tabBar;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (copy, nonatomic) NSArray *glyphSections;
@property (weak, nonatomic) WFGlyphPickerTabBar *tabBar;
@property (weak, nonatomic) id <WFGlyphPickerDelegate> delegate;
@property (nonatomic) unsigned short selectedGlyphCharacter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)numberOfSections;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)glyphPickerTabBar:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2;
- (unsigned short)glyphCharacterAtIndexPath:(id)arg1;
- (id)indexPathForGlyphCharacter:(unsigned short)arg1;

@end
