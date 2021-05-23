/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawable.h>

__attribute__((visibility("hidden")))
@interface OADGraphic : OADDrawable

{
    OADGraphic *mMasterGraphic;
}

- (id)description;
- (id)geometry;
- (id)graphicProperties;
- (void)setMasterGraphic:(id)arg1;
- (id)masterGraphic;

@end
