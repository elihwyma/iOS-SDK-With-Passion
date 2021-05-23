/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@interface _CPResultRankingFeedback : PBCodable <Swift>

{
    unsigned int _localResultPosition;
    unsigned long long _timestamp;
    _CPSearchResultForFeedback *_result;
    NSArray *_hiddenResults;
    NSArray *_duplicateResults;
    double _personalizationScore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, readonly) NSData *jsonData;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addHiddenResults:(id)arg1;
- (void)addDuplicateResults:(id)arg1;
- (void)clearHiddenResults;
- (unsigned long long)hiddenResultsCount;
- (id)hiddenResultsAtIndex:(unsigned long long)arg1;
- (void)clearDuplicateResults;
- (unsigned long long)duplicateResultsCount;
- (id)duplicateResultsAtIndex:(unsigned long long)arg1;

@end
