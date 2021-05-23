/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShapeGeometry.h>

__attribute__((visibility("hidden")))
@interface OADPresetShapeGeometry : OADShapeGeometry

{
    int mType;
}

- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (id)equivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;

@end
