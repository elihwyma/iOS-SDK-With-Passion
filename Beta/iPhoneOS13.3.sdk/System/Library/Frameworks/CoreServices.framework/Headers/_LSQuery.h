/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@interface _LSQuery : NSObject

{
    _Bool _legacy;
}

@property (nonatomic, getter=isLegacy) _Bool legacy;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (_Bool)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
