/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_UTTypeQuery.h>

__attribute__((visibility("hidden")))
@interface _UTTypeQueryForAllIdentifiers : _UTTypeQuery

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
