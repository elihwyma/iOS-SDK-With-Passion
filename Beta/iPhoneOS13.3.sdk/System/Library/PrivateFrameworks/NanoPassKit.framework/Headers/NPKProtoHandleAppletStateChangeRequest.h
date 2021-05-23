/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NPKProtoHandleAppletStateChangeRequest : PBRequest

{
    NSData *_passAppletState;
    NSString *_passID;
}

@property (nonatomic, readonly) _Bool hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (nonatomic, readonly) _Bool hasPassAppletState;
@property (retain, nonatomic) NSData *passAppletState;

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
