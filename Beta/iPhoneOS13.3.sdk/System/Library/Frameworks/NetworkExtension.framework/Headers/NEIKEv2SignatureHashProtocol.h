/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2SignatureHashProtocol : NSObject

{
    unsigned long long _hashType;
}

@property (nonatomic) unsigned long long hashType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithHashType:(unsigned long long)arg1;

@end
