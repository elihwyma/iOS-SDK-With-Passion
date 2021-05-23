/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, _CPListValue, _CPStruct;

@interface _CPValue : PBCodable <Swift>

{
    _Bool _bool_value;
    int _null_value;
    double _number_value;
    NSString *_string_value;
    _CPStruct *_struct_value;
    _CPListValue *_list_value;
    NSData *_bytes_value;
    unsigned long long _whichKind;
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
@property (nonatomic) int null_value;
@property (nonatomic) double number_value;
@property (copy, nonatomic) NSString *string_value;
@property (nonatomic) _Bool bool_value;
@property (retain, nonatomic) _CPStruct *struct_value;
@property (retain, nonatomic) _CPListValue *list_value;
@property (copy, nonatomic) NSData *bytes_value;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichKind;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)clearKind;

@end
