/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEAOVPNException : NSObject

{
    NSString *_serviceName;
    NSString *_bundleIdentifier;
    long long _action;
}

@property (copy) NSString *serviceName;
@property (copy) NSString *bundleIdentifier;
@property long long action;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
