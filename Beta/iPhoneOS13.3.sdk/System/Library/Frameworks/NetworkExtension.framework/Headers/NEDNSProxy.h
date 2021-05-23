/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEDNSProxyProviderProtocol, NSArray;

@interface NEDNSProxy : NSObject

{
    _Bool _enabled;
    NEDNSProxyProviderProtocol *_protocol;
    NSArray *_settings;
}

@property (getter=isEnabled) _Bool enabled;
@property (copy) NEDNSProxyProviderProtocol *protocol;
@property (copy) NSArray *settings;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
