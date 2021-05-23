/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface PKSwatchColor : NSObject

{
    UIColor *_color;
    NSString *_identifier;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *identifier;

+ (id)swatchColor:(id)arg1 identifier:(id)arg2;

- (id)initWithColor:(id)arg1 identifier:(id)arg2;

@end
