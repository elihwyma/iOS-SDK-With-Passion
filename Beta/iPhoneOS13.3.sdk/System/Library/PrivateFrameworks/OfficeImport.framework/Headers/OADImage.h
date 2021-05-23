/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADGraphic.h>

@class OADMovie, OADOle, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic

{
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (id)init;
- (id)description;
- (id)imageProperties;
- (id)geometry;
- (void)setGeometry:(id)arg1;
- (id)movie;
- (void)setMovie:(id)arg1;
- (id)initWithBlipRef:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)ole;
- (void)setOle:(id)arg1;
- (id)createImageFill;
- (void)createPictureFramePresetGeometry;

@end
