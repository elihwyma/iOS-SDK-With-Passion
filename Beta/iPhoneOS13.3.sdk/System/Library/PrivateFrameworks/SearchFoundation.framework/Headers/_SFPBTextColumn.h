/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumn : PBCodable <Swift>

{
    NSArray *_sections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)sectionsCount;
- (void)clearSections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (void)addSections:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
