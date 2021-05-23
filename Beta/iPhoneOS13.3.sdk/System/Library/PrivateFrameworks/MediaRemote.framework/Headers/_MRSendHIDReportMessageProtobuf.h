/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable

{
    NSData *_report;
    NSString *_virtualDeviceID;
}

@property (nonatomic, readonly) _Bool hasVirtualDeviceID;
@property (retain, nonatomic) NSString *virtualDeviceID;
@property (nonatomic, readonly) _Bool hasReport;
@property (retain, nonatomic) NSData *report;

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
