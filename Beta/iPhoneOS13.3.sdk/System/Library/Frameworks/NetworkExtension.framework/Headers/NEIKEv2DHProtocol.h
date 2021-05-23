/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2DHProtocol : NSObject

{
    unsigned long long _group;
}

@property unsigned long long group;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGroup:(unsigned long long)arg1;

@end
