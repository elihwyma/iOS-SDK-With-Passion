/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSData, NSString;

@interface NRPBTermsEvent : PBCodable <Swift>

{
    double _eventDate;
    NSString *_acknowledgedDeviceName;
    NSString *_acknowledgedDeviceSerialNumber;
    NSString *_displayDeviceName;
    NSString *_displayDeviceSerialNumber;
    NSString *_documentationID;
    int _eventType;
    NSString *_loggingProcessName;
    int _presentationLocation;
    NSString *_presentationReason;
    NSData *_termsText;
    struct {
        unsigned int eventDate:1;
        unsigned int eventType:1;
        unsigned int presentationLocation:1;
    } _has;
}

@property (nonatomic) _Bool hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) _Bool hasTermsText;
@property (retain, nonatomic) NSData *termsText;
@property (nonatomic, readonly) _Bool hasDocumentationID;
@property (retain, nonatomic) NSString *documentationID;
@property (nonatomic, readonly) _Bool hasPresentationReason;
@property (retain, nonatomic) NSString *presentationReason;
@property (nonatomic) _Bool hasPresentationLocation;
@property (nonatomic) int presentationLocation;
@property (nonatomic, readonly) _Bool hasAcknowledgedDeviceName;
@property (retain, nonatomic) NSString *acknowledgedDeviceName;
@property (nonatomic, readonly) _Bool hasAcknowledgedDeviceSerialNumber;
@property (retain, nonatomic) NSString *acknowledgedDeviceSerialNumber;
@property (nonatomic, readonly) _Bool hasDisplayDeviceName;
@property (retain, nonatomic) NSString *displayDeviceName;
@property (nonatomic, readonly) _Bool hasDisplayDeviceSerialNumber;
@property (retain, nonatomic) NSString *displayDeviceSerialNumber;
@property (nonatomic) _Bool hasEventDate;
@property (nonatomic) double eventDate;
@property (nonatomic, readonly) _Bool hasLoggingProcessName;
@property (retain, nonatomic) NSString *loggingProcessName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
