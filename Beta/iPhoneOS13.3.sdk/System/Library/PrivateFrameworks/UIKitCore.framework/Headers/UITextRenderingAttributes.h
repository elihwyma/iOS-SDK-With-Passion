/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <Swift>

{
    UIFont *_font;
    double _minimumFontSize;
    double _actualFontSize;
    double _lineSpacing;
    long long _lineBreakMode;
    long long _baselineAdjustment;
    double _trackingAdjustment;
    double _minimumTrackingAdjustment;
    double _actualTrackingAdjustment;
    long long _alignment;
    _Bool _includeEmoji;
    struct CGRect _truncationRect;
    _Bool _drawUnderline;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
