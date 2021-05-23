/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_Section : PBCodable

{
    _Bool _doNotFold;
    int _blockId;
    NSString *_header;
    NSString *_moreLabel;
    NSString *_moreUrl;
    NSString *_morePunchout;
    NSArray *_resultIdentifiers;
    unsigned long long _whichMore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *moreLabel;
@property (copy, nonatomic) NSString *moreUrl;
@property (copy, nonatomic) NSString *morePunchout;
@property (nonatomic) int blockId;
@property (nonatomic) _Bool doNotFold;
@property (copy, nonatomic) NSArray *resultIdentifiers;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichMore;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addResultIdentifiers:(id)arg1;
- (void)clearResultIdentifiers;
- (unsigned long long)resultIdentifiersCount;
- (id)resultIdentifiersAtIndex:(unsigned long long)arg1;

@end
