/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_)arg2 signature:(struct SGMTypeSafeBool_)arg3 detail:(struct SGMContactDetailType_)arg4 outcome:(struct SGMContactDetailExtractionOutcome_)arg5 foundInSenderCNContact:(struct SGMContactDetailOwner_)arg6 extractionModelVersion:(unsigned long long)arg7 isUnlikelyPhone:(struct SGMTypeSafeBool_)arg8 signatureExtractionSource:(struct SGMContactDetailExtractionSignatureSource_)arg9;

@end
