/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PMLSessionDescriptor, SGCustomResponsesParameters, SGModelHyperparameters, SGQuickResponsesClassificationParameters, SGQuickResponsesPredictionParameters, SGQuickResponsesReplies;

@interface SGQuickResponsesConfig : NSObject

{
    SGModelHyperparameters *_modelHyperparameters;
    NSArray *_preprocessingMethods;
    NSArray *_labels;
    SGQuickResponsesReplies *_replies;
    SGQuickResponsesClassificationParameters *_classificationParams;
    SGQuickResponsesPredictionParameters *_predictionParams;
    SGCustomResponsesParameters *_customResponsesParameters;
    NSString *_language;
    unsigned long long _mode;
    PMLSessionDescriptor *_sessionDescriptor;
}

@property (nonatomic, readonly) SGModelHyperparameters *modelHyperparameters;
@property (nonatomic, readonly) NSArray *preprocessingMethods;
@property (nonatomic, readonly) NSArray *labels;
@property (nonatomic, readonly) SGQuickResponsesReplies *replies;
@property (nonatomic, readonly) SGQuickResponsesClassificationParameters *classificationParams;
@property (nonatomic, readonly) SGQuickResponsesPredictionParameters *predictionParams;
@property (nonatomic, readonly) SGCustomResponsesParameters *customResponsesParameters;
@property (copy, nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;

- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 plistPath:(id)arg3;
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 dictionary:(id)arg3;

@end
