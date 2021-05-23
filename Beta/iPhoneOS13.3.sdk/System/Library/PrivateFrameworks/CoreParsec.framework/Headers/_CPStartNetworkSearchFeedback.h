/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPStartNetworkSearchFeedback : PBCodable <Swift>

{
    int _endpoint;
    int _triggerEvent;
    int _lookupSelectionType;
    int _tuscanyStatus;
    unsigned long long _timestamp;
    NSString *_input;
    NSString *_uuid;
    unsigned long long _queryId;
    NSString *_url;
    NSDictionary *_headers;
    NSData *_bodyData;
    unsigned long long _whichTrigger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic, readonly) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) int endpoint;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int lookupSelectionType;
@property (nonatomic) int tuscanyStatus;
@property (copy, nonatomic) NSData *bodyData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichTrigger;

+ (id)startSearchFeedbackWithUUID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)clearTrigger;
- (void)setHeaders:(id)arg1 forKey:(id)arg2;
- (_Bool)getHeaders:(id *)arg1 forKey:(id)arg2;

@end
