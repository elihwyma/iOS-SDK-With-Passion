/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface UNSecurityScopedURL : NSURL

{
    NSString *_sandboxExtensionClass;
}

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (id)_issueSandboxExtension;
- (id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2;

@end
