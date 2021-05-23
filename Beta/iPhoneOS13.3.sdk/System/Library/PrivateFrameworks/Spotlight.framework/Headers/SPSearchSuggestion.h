/*
 Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

#import <SearchFoundation/SFSearchSuggestion.h>

@interface SPSearchSuggestion : SFSearchSuggestion

{
    _Bool _isSingleThread;
    _Bool _hasUsedDate;
    _Bool _isShortcut;
    int _weight;
    int _parentWeight;
    int _rootWeight;
    int _completionType;
    int _prefixLen;
    float _fieldWeight;
    unsigned long long _len;
    unsigned long long _fragments;
    double _age;
    unsigned long long _maxscore;
    double _compositeScore;
    double _phraseScore;
}

@property unsigned long long len;
@property unsigned long long fragments;
@property double age;
@property unsigned long long maxscore;
@property int weight;
@property int parentWeight;
@property int rootWeight;
@property double compositeScore;
@property int completionType;
@property int prefixLen;
@property float fieldWeight;
@property _Bool isSingleThread;
@property double phraseScore;
@property _Bool hasUsedDate;
@property _Bool isShortcut;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (Class)classForKeyedArchiver;
- (id)suggestionsFeedbackData;
- (id)searchEntities;

@end
