/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject

{
    EDResources *mResources;
    EDString *mString;
    unsigned long long mContentFormatId;
    int mPosition;
    _Bool mShowLeaderLines;
    _Bool mShowCategoryName;
    _Bool mShowSeriesName;
    _Bool mShowPercent;
    _Bool mShowBubbleSize;
    _Bool mShowValue;
    _Bool mShowLegendKey;
    _Bool mIsPositionAffineTransform;
    _Bool mContentFormatDerived;
    _Bool mDeleted;
    _Bool mExtensionDetected;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
    OADGraphicProperties *mLeaderlineGraphicProperties;
}

@property (retain, nonatomic) EDString *string;

+ (id)dataLabelWithResources:(id)arg1;

- (id)description;
- (int)position;
- (void)setPosition:(int)arg1;
- (void)setShowValue:(_Bool)arg1;
- (_Bool)isDeleted;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void)setDeleted:(_Bool)arg1;
- (_Bool)isLabelVisible;
- (id)initWithResources:(id)arg1;
- (id)graphicProperties;
- (unsigned long long)contentFormatId;
- (id)contentFormat;
- (_Bool)isShowValue;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;
- (void)setContentFormat:(id)arg1;
- (_Bool)isContentFormatDerivedFromDataPoints;
- (_Bool)isShowLeaderLines;
- (_Bool)hasLeaderLinesGraphics;
- (void)setShowLeaderLines:(_Bool)arg1;
- (_Bool)isShowCategoryName;
- (void)setShowCategoryName:(_Bool)arg1;
- (_Bool)isShowSeriesName;
- (void)setShowSeriesName:(_Bool)arg1;
- (_Bool)isShowPercent;
- (void)setShowPercent:(_Bool)arg1;
- (_Bool)isShowBubbleSize;
- (void)setShowBubbleSize:(_Bool)arg1;
- (_Bool)isShowLegendKey;
- (void)setShowLegendKey:(_Bool)arg1;
- (_Bool)isExtensionDetected;
- (void)setExtensionDetected:(_Bool)arg1;
- (_Bool)isCustomLabelBlockingVisibility;
- (id)leaderlineGraphicProperties;
- (void)setLeaderlineGraphicProperties:(id)arg1;
- (void)setIsPositionAffineTransform:(_Bool)arg1;
- (_Bool)isPositionAffineTransform;

@end
