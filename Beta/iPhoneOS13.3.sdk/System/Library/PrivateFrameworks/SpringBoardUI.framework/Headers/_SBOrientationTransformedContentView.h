/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/_UIDirectionalRotationView.h>

@interface _SBOrientationTransformedContentView : _UIDirectionalRotationView

{
    long long _contentOrientation;
}

@property (nonatomic) long long contentOrientation;

- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end
