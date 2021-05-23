/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLModel.h>

@class NSString;

@interface MLWrappedModel : MLModel

{
    MLModel *_innerModel;
    NSString *_reason;
}

@property (retain) MLModel *innerModel;
@property (retain, nonatomic) NSString *reason;

- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id *)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (id)initWithInnerModel:(id)arg1;
- (void)clearInnerModelWithReason:(id)arg1;

@end
