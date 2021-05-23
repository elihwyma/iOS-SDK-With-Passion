/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _CPSearchSuggestionForFeedback : PBCodable

{
    int _type;
    NSString *_identifier;
    NSString *_suggestion;
    NSString *_query;
    double _score;
    NSString *_fbr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) double score;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
