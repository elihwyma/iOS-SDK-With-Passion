/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UILabel.h>

@interface _MKUILabel : UILabel

{
    CDUnknownBlockType __mapkit_themeColorProvider;
}

@property (copy, nonatomic) CDUnknownBlockType _mapkit_themeColorProvider;

- (void)didMoveToWindow;
- (void)infoCardThemeChanged;

@end
