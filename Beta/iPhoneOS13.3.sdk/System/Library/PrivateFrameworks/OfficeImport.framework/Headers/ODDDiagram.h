/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDrawable.h>

@class NSArray, ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram : OADDrawable

{
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
    NSArray *mEquivalentDrawables;
}

@property (retain, nonatomic) NSArray *equivalentDrawables;

- (id)init;
- (id)description;
- (id)colorTransform;
- (id)documentPoint;
- (id)styleDefinition;
- (void)setParentTextListStyle:(id)arg1;
- (void)setDocumentPoint:(id)arg1;

@end
