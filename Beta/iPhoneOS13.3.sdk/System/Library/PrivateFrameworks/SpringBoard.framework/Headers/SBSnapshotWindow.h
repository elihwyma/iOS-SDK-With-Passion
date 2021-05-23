/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIWindow.h>

@interface SBSnapshotWindow : UIWindow

{
    long long _orientation;
}

+ (_Bool)_isSecure;

- (long long)interfaceOrientation;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;

@end
