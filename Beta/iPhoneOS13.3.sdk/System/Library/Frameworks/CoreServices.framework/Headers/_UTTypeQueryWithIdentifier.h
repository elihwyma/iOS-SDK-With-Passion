/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_UTTypeQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTTypeQueryWithIdentifier : _UTTypeQuery

{
    NSString *_identifier;
    _Bool _dynamic;
    _Bool _valid;
}

+ (_Bool)supportsSecureCoding;
+ (id)_typeCache;
+ (void)_precacheTypesForIdentifiers:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)_canResolveLocallyWithoutMappingDatabase;
- (_Bool)getLocallyResolvedType:(id *)arg1 orErrorWithoutMappingDatabase:(id *)arg2;
- (id)resolve;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
