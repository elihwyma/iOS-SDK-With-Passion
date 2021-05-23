/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelScaledMetrics : NSObject

{
    double _actualScaleFactor;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    long long _measuredNumberOfLines;
    NSAttributedString *_scaledAttributedText;
    double _unscaledFirstBaselineOffset;
    struct CGSize _targetSize;
    struct CGSize _scaledSize;
    struct CGSize _unscaledAndPossiblyTooLargeSize;
}

@property (nonatomic) struct CGSize targetSize;
@property (nonatomic) struct CGSize scaledSize;
@property (nonatomic) double actualScaleFactor;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) long long measuredNumberOfLines;
@property (retain, nonatomic) NSAttributedString *scaledAttributedText;
@property (nonatomic) struct CGSize unscaledAndPossiblyTooLargeSize;
@property (nonatomic) double unscaledFirstBaselineOffset;

@end
