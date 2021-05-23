/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <CoreRecognition/CRMLCCModel.h>

@interface CRMLEmbossedCardholderModel : CRMLCCModel

- (id)modelName;
- (id)decodeActivations:(vector_00ef371e *)arg1;
- (const int *)codeMap;
- (int)classCount;

@end
