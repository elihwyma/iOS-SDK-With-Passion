/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface SUShadow : NSObject

{
    UIColor *_color;
    struct CGSize _offset;
    double _opacity;
    double _radius;
}

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToLayer:(id)arg1;

@end
