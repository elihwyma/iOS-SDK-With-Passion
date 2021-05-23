/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject

{
    unsigned long long _semanticClassIndex;
    NSArray *_semanticClasses;
    NSArray *_selectedPseudocounts;
    double _scoreWeight;
    unsigned long long _category;
}

@property (nonatomic, readonly) unsigned long long semanticClassIndex;
@property (nonatomic, readonly) NSArray *semanticClasses;
@property (nonatomic, readonly) NSArray *selectedPseudocounts;
@property (nonatomic, readonly) double scoreWeight;
@property (nonatomic, readonly) unsigned long long category;

+ (id)semanticClassesForArray:(id)arg1;

- (id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2;

@end
