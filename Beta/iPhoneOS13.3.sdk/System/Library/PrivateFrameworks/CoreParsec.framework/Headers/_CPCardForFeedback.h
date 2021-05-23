/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

@interface _CPCardForFeedback : PBCodable

{
    NSArray *_cardSections;
    NSString *_fbr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *cardSections;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
- (unsigned long long)cardSectionsCount;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;

@end
