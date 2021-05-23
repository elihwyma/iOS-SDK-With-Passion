/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGQuickResponsesPredictionParameters : NSObject

{
    _Bool _isPersonalizationDisabled;
    _Bool _isReplyTextRandomized;
    _Bool _isPerCategory;
    double _weightForCategoryAverage;
    double _weightForCategoryMax;
    double _weightForIndividualModel;
    double _classDiscount;
    double _responsesBonus;
    double _minToShowThreshold;
    unsigned long long _defaultResponsesToReturn;
    unsigned long long _responsesToShowAtTopForDiversity;
    double _personalizationExplorationFactor;
    double _personalizationDisplayedPseudocount;
    double _personalizationSelectedPseudocountPerSemanticClass;
    unsigned long long _maxPromptLength;
    double _maxPromptWindowSeconds;
    NSString *_promptJoiningString;
}

@property (nonatomic, readonly) _Bool isPersonalizationDisabled;
@property (nonatomic, readonly) _Bool isReplyTextRandomized;
@property (nonatomic, readonly) _Bool isPerCategory;
@property (nonatomic, readonly) double weightForCategoryAverage;
@property (nonatomic, readonly) double weightForCategoryMax;
@property (nonatomic, readonly) double weightForIndividualModel;
@property (nonatomic, readonly) double classDiscount;
@property (nonatomic, readonly) double responsesBonus;
@property (nonatomic, readonly) double minToShowThreshold;
@property (nonatomic, readonly) unsigned long long defaultResponsesToReturn;
@property (nonatomic, readonly) unsigned long long responsesToShowAtTopForDiversity;
@property (nonatomic, readonly) double personalizationExplorationFactor;
@property (nonatomic, readonly) double personalizationDisplayedPseudocount;
@property (nonatomic, readonly) double personalizationSelectedPseudocountPerSemanticClass;
@property (nonatomic, readonly) unsigned long long maxPromptLength;
@property (nonatomic, readonly) double maxPromptWindowSeconds;
@property (nonatomic, readonly) NSString *promptJoiningString;

- (id)initWithDictionary:(id)arg1;

@end
