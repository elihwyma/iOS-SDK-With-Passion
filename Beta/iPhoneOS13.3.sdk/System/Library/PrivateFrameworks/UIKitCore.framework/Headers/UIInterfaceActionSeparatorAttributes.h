/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <Swift>

{
    NSArray *_filters;
    UIColor *_backgroundColor;
    double _opacity;
}

@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double opacity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newSeparatorView;
- (_Bool)_hasNonClearBackgroundColor;

@end
