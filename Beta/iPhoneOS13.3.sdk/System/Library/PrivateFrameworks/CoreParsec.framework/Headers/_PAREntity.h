/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PAREntity : PBCodable

{
    float _probabilityScore;
    int _category;
    NSString *_name;
    NSArray *_topics;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float probabilityScore;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int category;
@property (copy, nonatomic) NSArray *topics;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)clearTopics;
- (void)addTopics:(id)arg1;
- (id)topicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicsCount;

@end
