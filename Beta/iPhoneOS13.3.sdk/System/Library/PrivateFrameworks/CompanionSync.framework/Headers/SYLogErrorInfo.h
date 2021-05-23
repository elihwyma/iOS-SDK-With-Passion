/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface SYLogErrorInfo : PBCodable

{
    long long _code;
    NSString *_domain;
}

@property (nonatomic, readonly) NSError *cocoaError;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithCocoaError:(id)arg1;

@end
