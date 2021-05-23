/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSData.h>

@class NSString;

@interface PFUuidData : NSData

{
    unsigned char _uuid[16];
}

@property (nonatomic, readonly) NSString *canonicalStringValue;
@property (nonatomic, readonly) NSString *mercuryStringValue;
@property (nonatomic, readonly) NSData *dataValue;
@property (nonatomic, readonly) _Bool isNull;

+ (_Bool)isMercuryBase64String:(id)arg1;
+ (_Bool)isCanonicalUuidString:(id)arg1;
+ (id)randomUuid;
+ (id)uuidWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)uuidWithData:(id)arg1;
+ (id)uuidWithString:(id)arg1;
+ (id)nullUuid;
+ (_Bool)isMercuryUuidString:(id)arg1;
+ (_Bool)isSupportedUuidString:(id)arg1;
+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (id)hostUuid;

- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (const void *)bytes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isEqualToData:(id)arg1;
- (id)initWithMercuryBase64String:(id)arg1;
- (id)initRandom;
- (id)initNull;

@end
