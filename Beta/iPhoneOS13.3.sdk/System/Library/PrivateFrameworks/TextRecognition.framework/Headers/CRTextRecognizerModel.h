/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

#import <NSObject.h>

@class MLModel, NSString;

__attribute__((visibility("hidden")))
@interface CRTextRecognizerModel : NSObject

{
    MLModel *_model;
    NSString *_codemap;
    unsigned short *_codemapArray;
    long long _ctcBlankLabelIndex;
}

@property (nonatomic, readonly) MLModel *model;
@property (retain, nonatomic) NSString *codemap;
@property (nonatomic) unsigned short *codemapArray;
@property (nonatomic) long long ctcBlankLabelIndex;

+ (id)urlOfModelInThisBundle;

- (id)init;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromImg_input:(id)arg1 error:(id *)arg2;

@end
