/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class DOCLargeTagView, DOCTag;

@interface DOCTagEditorTagCell : UICollectionViewCell

{
    _Bool _mixedSelection;
    DOCLargeTagView *_tagView;
}

@property (retain, nonatomic) DOCLargeTagView *tagView;
@property (retain, nonatomic) DOCTag *tagValue;
@property (nonatomic) _Bool mixedSelection;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateStyle;

@end
