/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBUserActivityInfo : PBCodable <Swift>

{
    int _valueType;
    NSString *_key;
    NSString *_stringValue;
    _SFPBURL *_urlValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int valueType;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) _SFPBURL *urlValue;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
