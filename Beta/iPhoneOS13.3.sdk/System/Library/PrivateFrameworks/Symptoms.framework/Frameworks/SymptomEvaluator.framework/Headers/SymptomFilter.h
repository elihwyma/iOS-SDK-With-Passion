/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class Filter, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SymptomFilter : NSObject

{
    unsigned int _targetSymptomId;
    NSMutableDictionary *_potentialFilters;
    Filter *_currentFilter;
    Filter *_finalFilter;
}

@property (nonatomic) unsigned int targetSymptomId;
@property (nonatomic, readonly) NSMutableDictionary *potentialFilters;
@property (retain, nonatomic) Filter *currentFilter;
@property (retain, nonatomic) Filter *finalFilter;

- (id)init;
- (id)description;
- (int)configureItem:(id)arg1;

@end
