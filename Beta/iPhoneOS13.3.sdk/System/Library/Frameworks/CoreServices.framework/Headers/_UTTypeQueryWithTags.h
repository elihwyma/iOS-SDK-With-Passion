/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_UTTypeQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTTypeQueryWithTags : _UTTypeQuery

{
    NSString *_tag;
    NSString *_tagClass;
    NSString *_conformsTo;
    long long _limit;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
