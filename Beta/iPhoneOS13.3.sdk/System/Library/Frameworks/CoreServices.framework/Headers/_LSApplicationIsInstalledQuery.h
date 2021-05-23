/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationIsInstalledQuery : _LSQuery

{
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)queryWithBundleIdentifier:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
