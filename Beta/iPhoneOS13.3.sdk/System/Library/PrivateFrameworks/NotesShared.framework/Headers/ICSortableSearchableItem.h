/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject

{
    _Bool _isPrefixMatch;
    CSSearchableItem *_searchableItem;
    double _rankingScore;
    unsigned long long _relevanceBitField;
    unsigned long long _modificationDateBucket;
    NSDate *_modificationDate;
    NSDate *_creationDate;
    unsigned long long _searchResultType;
}

@property (retain, nonatomic) CSSearchableItem *searchableItem;
@property (nonatomic) double rankingScore;
@property (nonatomic) unsigned long long relevanceBitField;
@property (nonatomic) _Bool isPrefixMatch;
@property (nonatomic) unsigned long long modificationDateBucket;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long searchResultType;

+ (id)sortDescriptorsForRankingStrategy:(unsigned long long)arg1;

- (id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 modificationDateBucket:(unsigned long long)arg4 searchResultType:(unsigned long long)arg5 isPrefixMatch:(_Bool)arg6;

@end
