/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADGraphic.h>

@class OADOrientedBounds, OADShapeGeometry, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic

{
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
    OADOrientedBounds *mTextOrientedBounds;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (id)init;
- (id)description;
- (int)type;
- (id)textBody;
- (void)setTextBody:(id)arg1;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (id)shapeStyle;
- (id)shapeProperties;
- (_Bool)isTextBox;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)flattenProperties;
- (void)createPresetGeometryWithShapeType:(int)arg1;

@end
