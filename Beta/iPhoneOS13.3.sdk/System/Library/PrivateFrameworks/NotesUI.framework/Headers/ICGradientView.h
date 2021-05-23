/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface ICGradientView : UIView

{
    NSArray *_gradientColors;
}

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayerColors;

@end
