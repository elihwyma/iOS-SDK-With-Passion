/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface _MLNLPFrameworkHandle : NSObject

{
    _Bool _valid;
    CDUnknownFunctionPointerType _NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelCreateWithDataImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelGetRevisionImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelIsRevisionSupportedImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelGetCurrentRevisionImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelCopyPredictedLabelForTextImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelCreateWithDataImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelGetRevisionImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelIsRevisionSupportedImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelGetCurrentRevisionImpl;
    CDUnknownFunctionPointerType _NLPGazetteerModelCopyLabelForStringImpl;
    CDUnknownFunctionPointerType _NLPGazetteerModelCreateWithDataImpl;
    CDUnknownFunctionPointerType _NLPGazetteerModelGetRevisionImpl;
    CDUnknownFunctionPointerType _NLPGazetteerModelIsRevisionSupportedImpl;
    CDUnknownFunctionPointerType _NLPGazetteerModelGetCurrentRevisionImpl;
    CDUnknownFunctionPointerType _NLPEmbeddingModelCopyVectorForStringImpl;
    CDUnknownFunctionPointerType _NLPEmbeddingModelCreateWithDataImpl;
    CDUnknownFunctionPointerType _NLPEmbeddingModelGetRevisionImpl;
    CDUnknownFunctionPointerType _NLPEmbeddingModelIsRevisionSupportedImpl;
    CDUnknownFunctionPointerType _NLPEmbeddingModelGetCurrentRevisionImpl;
}

@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPSequenceModelCreateWithDataImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPSequenceModelGetRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPSequenceModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPSequenceModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPClassifierModelCopyPredictedLabelForTextImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPClassifierModelCreateWithDataImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPClassifierModelGetRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPClassifierModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPClassifierModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPGazetteerModelCopyLabelForStringImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPGazetteerModelCreateWithDataImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPGazetteerModelGetRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPGazetteerModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPGazetteerModelGetCurrentRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPEmbeddingModelCopyVectorForStringImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPEmbeddingModelCreateWithDataImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPEmbeddingModelGetRevisionImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPEmbeddingModelIsRevisionSupportedImpl;
@property (nonatomic, readonly) CDUnknownFunctionPointerType NLPEmbeddingModelGetCurrentRevisionImpl;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (id)sharedHandle;

- (id)init;
- (const void *)initializeWordTaggingModelWithData:(id)arg1 error:(id *)arg2;
- (const void *)initializeSentenceClassifierModelWithData:(id)arg1 error:(id *)arg2;
- (const void *)initializeGazetteerModelWithData:(id)arg1 error:(id *)arg2;
- (const void *)initializeEmbeddingModelWithData:(id)arg1 error:(id *)arg2;
- (id)predictTokensLabelsLocationsLengthsForString:(void *)arg1 inputString:(id)arg2 error:(id *)arg3;
- (id)predictLabelsForSentenceString:(void *)arg1 inputString:(id)arg2 error:(id *)arg3;
- (id)predictLabelForWordString:(void *)arg1 inputString:(id)arg2 error:(id *)arg3;
- (id)predictVectorForString:(void *)arg1 inputString:(id)arg2 error:(id *)arg3;

@end
