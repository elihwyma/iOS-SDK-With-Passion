/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBRequest.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface ICIAMLogEventRequest : PBRequest <Swift>

{
    long long _dSID;
    NSString *_applicationMessageIdentifier;
    NSString *_deviceID;
    NSMutableArray *_eventParameters;
    CDStruct_f07dd4d9 _has;
}

@property (nonatomic, readonly) _Bool hasApplicationMessageIdentifier;
@property (retain, nonatomic) NSString *applicationMessageIdentifier;
@property (nonatomic) _Bool hasDSID;
@property (nonatomic) long long dSID;
@property (nonatomic, readonly) _Bool hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSMutableArray *eventParameters;

+ (Class)eventParametersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEventParameters:(id)arg1;
- (unsigned long long)eventParametersCount;
- (void)clearEventParameters;
- (id)eventParametersAtIndex:(unsigned long long)arg1;

@end
