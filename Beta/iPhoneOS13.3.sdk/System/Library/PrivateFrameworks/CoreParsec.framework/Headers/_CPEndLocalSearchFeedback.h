/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPEndLocalSearchFeedback : PBCodable <Swift>

{
    unsigned long long _timestamp;
    NSString *_uuid;
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
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic, readonly) NSData *jsonData;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
