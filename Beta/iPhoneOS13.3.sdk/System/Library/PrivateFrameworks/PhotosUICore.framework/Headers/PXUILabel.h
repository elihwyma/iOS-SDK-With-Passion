/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, PXLabelSpec, UILabel, UIVisualEffectView;

@interface PXUILabel : UIView

{
    UILabel *_label;
    UIVisualEffectView *_visualEffectView;
    NSArray *_labelLayoutConstraints;
    long long _verticalAlignment;
    struct UIEdgeInsets _contentInsets;
    NSString *_text;
    PXLabelSpec *_spec;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) PXLabelSpec *spec;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_commonPXMemoriesLabelInitialization;
- (void)_configureLabel;
- (id)_configuredText;

@end
