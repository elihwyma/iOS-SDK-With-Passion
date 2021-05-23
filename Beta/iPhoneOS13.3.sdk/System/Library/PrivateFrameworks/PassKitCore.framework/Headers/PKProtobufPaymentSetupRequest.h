/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBRequest.h>

@class NSString;

@interface PKProtobufPaymentSetupRequest : PBRequest

{
    NSString *_appName;
}

@property (nonatomic, readonly) _Bool hasAppName;
@property (retain, nonatomic) NSString *appName;

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
