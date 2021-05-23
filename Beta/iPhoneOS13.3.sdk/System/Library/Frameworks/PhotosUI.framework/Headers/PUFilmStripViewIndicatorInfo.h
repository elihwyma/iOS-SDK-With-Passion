/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface PUFilmStripViewIndicatorInfo : NSObject

{
    double _normalizedLocation;
    UIColor *_color;
}

@property (nonatomic, readonly) double normalizedLocation;
@property (nonatomic, readonly) UIColor *color;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLocation:(double)arg1 color:(id)arg2;

@end
