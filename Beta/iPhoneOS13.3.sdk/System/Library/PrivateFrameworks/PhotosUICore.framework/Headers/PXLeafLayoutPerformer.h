/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXBaseLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer

{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_392cfed4 layoutInput;
}

- (id)children;
- (struct CGSize)performLayout;
- (CDStruct_392cfed4)layoutInput;
- (void)setLayoutInput:(CDStruct_392cfed4)arg1;
- (id)layoutOutput;
- (void)setLayoutOutput:(id)arg1;

@end
