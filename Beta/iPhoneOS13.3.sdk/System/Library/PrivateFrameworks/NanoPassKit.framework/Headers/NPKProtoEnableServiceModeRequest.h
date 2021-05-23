/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface NPKProtoEnableServiceModeRequest : PBRequest

{
    NSString *_uniqueID;
    _Bool _cancelOutstandingRequests;
    struct {
        unsigned int cancelOutstandingRequests:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) _Bool hasCancelOutstandingRequests;
@property (nonatomic) _Bool cancelOutstandingRequests;

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
