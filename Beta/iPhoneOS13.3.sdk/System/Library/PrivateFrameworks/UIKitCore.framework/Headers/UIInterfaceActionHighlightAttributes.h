/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <Swift>

{
    double _opacity;
    NSArray *_filters;
    UIColor *_backgroundColor;
}

@property (nonatomic) double opacity;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newBackgroundHighlightView;
- (_Bool)_hasNonClearBackgroundColor;

@end
