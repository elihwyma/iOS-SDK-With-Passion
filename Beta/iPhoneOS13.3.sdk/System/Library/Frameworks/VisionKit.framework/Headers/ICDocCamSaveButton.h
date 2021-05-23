/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIButton.h>

@class NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface ICDocCamSaveButton : UIButton

{
    long long _documentCount;
    long long _maxWidthForPortraitIPhone;
    UILabel *_countLabel;
    UILabel *_saveLabel;
    NSMutableArray *_layoutConstraints;
}

@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *saveLabel;
@property (retain, nonatomic) NSMutableArray *layoutConstraints;
@property (nonatomic) long long documentCount;
@property (nonatomic) long long maxWidthForPortraitIPhone;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (void)layoutSubviews;
- (id)saveButtonCountStringForDocumentCount:(unsigned long long)arg1;
- (id)saveButtonTitleForDocumentCount:(unsigned long long)arg1;

@end
