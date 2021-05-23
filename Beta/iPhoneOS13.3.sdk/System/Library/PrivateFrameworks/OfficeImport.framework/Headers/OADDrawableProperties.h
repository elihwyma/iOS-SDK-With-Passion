/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

@class NSString, OADHyperlink, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface OADDrawableProperties : OADProperties

{
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned int mHasAspectRatioLocked:1;
    unsigned int mAspectRatioLocked:1;
    unsigned int mHasWrdInline:1;
    unsigned int mWrdInline:1;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDefaults;
- (void)setAspectRatioLocked:(_Bool)arg1;
- (id)clickHyperlink;
- (id)orientedBounds;
- (void)setOrientedBounds:(id)arg1;
- (void)setClickHyperlink:(id)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setAltTitle:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (id)hoverHyperlink;
- (void)removeUnnecessaryOverrides;
- (_Bool)hasOrientedBounds;
- (void)setWrdInline:(_Bool)arg1;
- (_Bool)hasClickHyperlink;
- (_Bool)hasHoverHyperlink;
- (_Bool)hasAltTitle;
- (id)altTitle;
- (_Bool)isAspectRatioLocked;
- (_Bool)isWrdInline;
- (_Bool)hasAspectRatioLocked;
- (_Bool)hasWrdInline;
- (id)orientedBoundsForCharts;
- (id)altDescription;
- (void)setAltDescription:(id)arg1;
- (_Bool)hasAltDescription;

@end
