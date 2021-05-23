/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface STStorageProgressView : UIView

{
    UIColor *_grayColor;
    UIColor *_blueColor;
    double _percent;
}

@property (nonatomic) double percent;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateColors;

@end
