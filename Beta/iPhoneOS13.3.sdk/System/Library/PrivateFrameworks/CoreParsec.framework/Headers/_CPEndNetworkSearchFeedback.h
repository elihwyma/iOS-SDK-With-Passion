/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, _CPNetworkTimingData;

@interface _CPEndNetworkSearchFeedback : PBCodable <Swift>

{
    int _statusCode;
    unsigned long long _timestamp;
    long long _responseSize;
    NSString *_uuid;
    NSString *_parsecStatus;
    NSString *_fbq;
    double _duration;
    NSString *_partialClientIp;
    _CPNetworkTimingData *_timingData;
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
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *parsecStatus;
@property (copy, nonatomic) NSString *fbq;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *partialClientIp;
@property (retain, nonatomic) _CPNetworkTimingData *timingData;
@property (nonatomic, readonly) NSData *jsonData;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)_formatNetworkTimingData;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8;

@end
