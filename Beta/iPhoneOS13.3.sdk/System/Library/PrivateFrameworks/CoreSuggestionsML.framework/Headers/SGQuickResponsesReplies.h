/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface SGQuickResponsesReplies : NSObject

{
    NSArray *_models;
    NSArray *_semanticClasses;
    NSArray *_styleGroups;
    NSArray *_replyTexts;
    NSArray *_selectedPseudocounts;
    NSArray *_semanticClassReplyTextStrings;
    NSArray *_semanticClassSelectedPseudocounts;
    NSArray *_semanticClassParent;
    NSArray *_styleGroupParent;
    NSArray *_replyTextParent;
    NSArray *_categoryModels;
    NSArray *_categorySemanticClasses;
    NSArray *_categoryStyleGroups;
    NSArray *_semanticClassStyleGroups;
    NSArray *_semanticClassReplyTexts;
    NSArray *_styleGroupReplyTexts;
    NSSet *_replyTextsSet;
}

@property (nonatomic, readonly) NSArray *models;
@property (nonatomic, readonly) NSArray *semanticClasses;
@property (nonatomic, readonly) NSArray *styleGroups;
@property (nonatomic, readonly) NSArray *replyTexts;
@property (nonatomic, readonly) NSArray *selectedPseudocounts;
@property (nonatomic, readonly) NSArray *semanticClassReplyTextStrings;
@property (nonatomic, readonly) NSArray *semanticClassSelectedPseudocounts;
@property (nonatomic, readonly) NSArray *semanticClassParent;
@property (nonatomic, readonly) NSArray *styleGroupParent;
@property (nonatomic, readonly) NSArray *replyTextParent;
@property (nonatomic, readonly) NSArray *categoryModels;
@property (nonatomic, readonly) NSArray *categorySemanticClasses;
@property (nonatomic, readonly) NSArray *categoryStyleGroups;
@property (nonatomic, readonly) NSArray *semanticClassStyleGroups;
@property (nonatomic, readonly) NSArray *semanticClassReplyTexts;
@property (nonatomic, readonly) NSArray *styleGroupReplyTexts;
@property (nonatomic, readonly) NSSet *replyTextsSet;

+ (id)nestedArrayFromFlatArray:(id)arg1 nestedIndexes:(id)arg2;
+ (id)selectedPseudocountsFromModels:(id)arg1;
+ (id)subclassesFromClasses:(id)arg1 subclassArray:(id)arg2;
+ (id)categoryModelsFromModels:(id)arg1;
+ (id)parentArraysFromNestedArray:(id)arg1 models:(id)arg2;
+ (id)flattenedArraysFromNestedArray:(id)arg1;
+ (id)indexedArraysFromNestedArray:(id)arg1;
+ (id)nestedArrayFromModels:(id)arg1;
+ (id)replyModelsForArray:(id)arg1;
+ (_Bool)isZeroBasedAndContiguous:(id)arg1;
+ (id)modelSemanticClassesFromModels:(id)arg1;

- (id)initWithArray:(id)arg1;

@end
