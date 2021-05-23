/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TUSandboxExtendedURL : NSObject <Swift>

{
    NSString *_sandboxExtensionClass;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;
@property (copy, nonatomic) NSString *sandboxExtensionClass;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (_Bool)isEqualToSandboxExtendedURL:(id)arg1;

@end
