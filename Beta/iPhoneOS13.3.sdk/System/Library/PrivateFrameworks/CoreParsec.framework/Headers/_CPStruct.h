/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPStruct : PBCodable <Swift>

{
    NSDictionary *_stringKeyFields;
    NSDictionary *_intKeyFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *stringKeyFields;
@property (copy, nonatomic) NSDictionary *intKeyFields;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)setStringKeyFields:(id)arg1 forKey:(id)arg2;
- (void)setIntKeyFields:(id)arg1 forKey:(int)arg2;
- (_Bool)getStringKeyFields:(id *)arg1 forKey:(id)arg2;
- (_Bool)getIntKeyFields:(id *)arg1 forKey:(int)arg2;

@end
