/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, REMLModel;

@interface REMLElementComparator : NSObject

{
    REMLModel *_model;
    NSArray *_filteringRules;
    NSArray *_rankingRules;
}

@property (copy, nonatomic) NSArray *filteringRules;
@property (copy, nonatomic) NSArray *rankingRules;
@property (nonatomic, readonly) unsigned long long comparisonLevels;

+ (id)comparatorWithFilteringRules:(id)arg1 rankingRules:(id)arg2 model:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)model;
- (id)initWithModel:(id)arg1;
- (long long)compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (_Bool)shouldHideElement:(id)arg1;

@end
