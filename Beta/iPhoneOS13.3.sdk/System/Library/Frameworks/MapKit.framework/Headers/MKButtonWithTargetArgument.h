/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface MKButtonWithTargetArgument : UIButton

{
    id _targetArgument;
}

@property (retain, nonatomic) id targetArgument;

+ (id)button;

@end
