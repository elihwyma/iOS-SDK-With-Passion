/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUParallaxComputer : NSObject

{
    int _axis;
    long long _model;
    double _parallaxFactor;
}

@property (nonatomic) long long model;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) int axis;

- (struct CGPoint)contentParallaxOffsetForViewFrame:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;

@end
