/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBStringDictionary;

@interface _SFPBTableAlignmentSchema : PBCodable <Swift>

{
    NSArray *_tableColumnAlignments;
    _SFPBStringDictionary *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *tableColumnAlignments;
@property (retain, nonatomic) _SFPBStringDictionary *metadata;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (void)setTableColumnAlignment:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addTableColumnAlignment:(id)arg1;
- (void)clearTableColumnAlignment;
- (unsigned long long)tableColumnAlignmentCount;
- (id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;

@end
