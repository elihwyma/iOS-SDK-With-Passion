/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2IntegrityProtocol : NSObject

{
    unsigned long long _type;
}

@property (readonly) unsigned int keyLength;
@property (readonly) unsigned int digestLength;
@property unsigned long long type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end
