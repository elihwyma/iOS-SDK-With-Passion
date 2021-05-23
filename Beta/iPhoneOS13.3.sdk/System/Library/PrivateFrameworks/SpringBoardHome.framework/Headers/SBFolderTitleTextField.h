/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UITextField.h>

@class _UILegibilitySettings;

@interface SBFolderTitleTextField : UITextField

{
    _Bool _showingEditUI;
    _Bool _allowsEditing;
    _UILegibilitySettings *_legibilitySettings;
}

@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) _Bool showingEditUI;

+ (id)_editBackgroundImage;
+ (id)_clearButtonImage;
+ (void)warmupIfNecessary;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_backgroundImage;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (id)_clearButtonImage;
- (void)_updateLegibility;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1;
- (void)setShowsEditUI:(_Bool)arg1 animated:(_Bool)arg2;

@end
