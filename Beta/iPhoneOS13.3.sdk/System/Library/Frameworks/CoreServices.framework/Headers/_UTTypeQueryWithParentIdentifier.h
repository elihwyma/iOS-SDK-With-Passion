/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_UTTypeQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTTypeQueryWithParentIdentifier : _UTTypeQuery

{
    NSString *_parentIdentifier;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_canResolveLocallyWithoutMappingDatabase;
- (_Bool)canIdentifierHaveChildren;
- (id)initWithParentIdentifier:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
