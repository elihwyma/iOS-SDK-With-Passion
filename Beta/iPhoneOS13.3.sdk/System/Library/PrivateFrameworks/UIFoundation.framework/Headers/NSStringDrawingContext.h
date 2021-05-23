/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSDictionary;

@interface NSStringDrawingContext : NSObject

{
    double _minimumScaleFactor;
    double _minimumTrackingAdjustment;
    double _actualScaleFactor;
    double _actualTrackingAdjustment;
    struct CGRect _totalBounds;
    NSDictionary *_linkAttributes;
    CUICatalog *_CUICatalog;
    CUIStyleEffectConfiguration *_CUIStyleEffects;
    unsigned long long _numberOfLineFragments;
    unsigned long long _maximumNumberOfLines;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    double _firstBaselineOffset;
    id _layout;
    struct {
        unsigned int _wantsNumberOfLineFragments:1;
        unsigned int _wrapsForTruncationMode:1;
        unsigned int _wantsBaselineOffset:1;
        unsigned int _wantsScaledBaselineOffset:1;
        unsigned int _wantsScaledLineHeight:1;
        unsigned int _drawsDebugBaselines:1;
        unsigned int _cachesLayout:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _activeRenderers:4;
        unsigned int _applicationPlatformContext:3;
    } _sdcFlags;
}

@property (nonatomic) double minimumTrackingAdjustment;
@property (nonatomic, readonly) double actualTrackingAdjustment;
@property (nonatomic) double actualScaleFactor;
@property (nonatomic) double actualTrackingAdjustment;
@property (nonatomic) struct CGRect totalBounds;
@property (nonatomic) _Bool wantsNumberOfLineFragments;
@property (nonatomic) unsigned long long numberOfLineFragments;
@property (nonatomic) _Bool wrapsForTruncationMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) _Bool wantsBaselineOffset;
@property (nonatomic) double baselineOffset;
@property (nonatomic) _Bool wantsScaledBaselineOffset;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) _Bool wantsScaledLineHeight;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) double firstBaselineOffset;
@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic) _Bool drawsDebugBaselines;
@property (nonatomic) _Bool cachesLayout;
@property (retain, nonatomic) id layout;
@property (nonatomic) _Bool usesSimpleTextEffects;
@property (nonatomic) unsigned long long activeRenderers;
@property (nonatomic) double minimumScaleFactor;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)applicationFrameworkContext;
- (void)setApplicationFrameworkContext:(long long)arg1;

@end
