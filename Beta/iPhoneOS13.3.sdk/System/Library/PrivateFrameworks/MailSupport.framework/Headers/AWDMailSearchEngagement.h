/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDMailUserSuggestionsEngagment, NSMutableArray;

@interface AWDMailSearchEngagement : PBCodable

{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _atoms;
    unsigned long long _numSearchResults;
    NSMutableArray *_engagements;
    int _searchScope;
    AWDMailUserSuggestionsEngagment *_suggestionsEngagement;
    struct {
        unsigned int numSearchResults:1;
        unsigned int searchScope:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long atomsCount;
@property (nonatomic, readonly) int *atoms;
@property (nonatomic) _Bool hasSearchScope;
@property (nonatomic) int searchScope;
@property (nonatomic) _Bool hasNumSearchResults;
@property (nonatomic) unsigned long long numSearchResults;
@property (retain, nonatomic) NSMutableArray *engagements;
@property (nonatomic, readonly) _Bool hasSuggestionsEngagement;
@property (retain, nonatomic) AWDMailUserSuggestionsEngagment *suggestionsEngagement;

+ (Class)engagementsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAtoms:(int)arg1;
- (id)initWithAtoms:(id)arg1 searchScope:(_Bool)arg2 suggestionsEngagement:(id)arg3;
- (void)addEngagements:(id)arg1;
- (void)clearAtoms;
- (int)atomsAtIndex:(unsigned long long)arg1;
- (unsigned long long)engagementsCount;
- (void)clearEngagements;
- (id)engagementsAtIndex:(unsigned long long)arg1;
- (void)setAtoms:(int *)arg1 count:(unsigned long long)arg2;
- (id)atomsAsString:(int)arg1;
- (int)StringAsAtoms:(id)arg1;
- (id)searchScopeAsString:(int)arg1;
- (int)StringAsSearchScope:(id)arg1;

@end
