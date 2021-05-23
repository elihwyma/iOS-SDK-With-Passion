/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString;

@interface SBDistanceFieldView : UIView

@property (copy, nonatomic) NSString *renderMode;
@property _Bool invertsShape;
@property struct CGColor *foregroundColor;
@property double offset;
@property double sharpness;
@property double lineWidth;

+ (Class)layerClass;

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
