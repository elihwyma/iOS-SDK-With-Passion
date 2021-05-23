/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject

{
    _Bool _disabled;
    UIColor *_color;
    double _offset;
    unsigned long long _style;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic) _Bool disabled;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3;
- (_Bool)isEqualToIndicatorInfo:(id)arg1;

@end
