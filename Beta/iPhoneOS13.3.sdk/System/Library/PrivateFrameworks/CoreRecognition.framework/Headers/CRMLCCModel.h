/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <TextRecognition/CRMLModel.h>

@interface CRMLCCModel : CRMLModel

- (id)init;
- (id)creditcardMLResultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(_Bool)arg3 tryPatternMatch:(_Bool)arg4;
- (id)creditcardResultsFromImage:(id)arg1;
- (id)creditcardResultsFromImage:(id)arg1 textFeatures:(id)arg2 invert:(_Bool)arg3 tryPatternMatch:(_Bool)arg4;

@end
