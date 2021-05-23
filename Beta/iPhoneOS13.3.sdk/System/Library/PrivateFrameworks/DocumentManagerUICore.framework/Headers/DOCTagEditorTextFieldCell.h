/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class DOCAddTagView;

@interface DOCTagEditorTextFieldCell : UICollectionViewCell

{
    DOCAddTagView *_addTagView;
}

@property (nonatomic, readonly) DOCAddTagView *addTagView;

- (id)initWithFrame:(struct CGRect)arg1;

@end
