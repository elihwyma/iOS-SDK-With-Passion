/*
 Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject

{
    unsigned long long _hash;
    NSString *_prefix;
    NSString *_bundleIdentifier;
}

@property (readonly) NSString *rawValue;
@property (readonly) NSString *prefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly, getter=isValid) _Bool valid;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (_Bool)isCaseSensitive;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1;
- (id)initForBundleProxy:(id)arg1;

@end
