/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection, EDResources, NSArray, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject

{
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned long long mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    _Bool mIsVertical;
    _Bool mIsOverlay;
    NSArray *mLabelEffects;
}

- (id)description;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setIsOverlay:(_Bool)arg1;
- (_Bool)isOverlay;
- (unsigned long long)fontIndex;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (id)graphicProperties;
- (int)legendPosition;
- (void)setLabelEffects:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setLegendPosition:(int)arg1;
- (void)setIsSingleColumnLegend:(_Bool)arg1;
- (id)labelEffects;
- (id)legendEntries;
- (_Bool)isSingleColumnLegend;
- (_Bool)isAutoSizeAndPosition;

@end
