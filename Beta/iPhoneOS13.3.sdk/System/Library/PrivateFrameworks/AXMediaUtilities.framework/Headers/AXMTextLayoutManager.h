/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMTextLayoutManager : NSObject

- (id)textDocumentWithVisionObservations:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3 error:(id *)arg4;
- (id)_axmVisionFeatureForFeature:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3;
- (id)_assembleLayoutSequences:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3;
- (id)_assembleLayoutLines:(id)arg1;
- (id)_assembleLayoutRegions:(id)arg1;
- (id)_textDocumentWithFeatures:(id)arg1 canvasSize:(struct CGSize)arg2 context:(id)arg3 error:(id *)arg4;

@end
