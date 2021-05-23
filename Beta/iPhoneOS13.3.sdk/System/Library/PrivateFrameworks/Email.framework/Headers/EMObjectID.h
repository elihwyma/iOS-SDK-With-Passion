/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EFStringHash, NSString;

@protocol NSObject><NSSecureCoding><NSCopying;

@interface EMObjectID : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    unsigned long long _hash;
    _Bool _ephemeral;
    id <NSObject><NSSecureCoding><NSCopying> _representedObjectID;
    EFStringHash *_stringHash;
}

@property (copy, nonatomic, readonly) id <NSObject><NSSecureCoding><NSCopying> representedObjectID;
@property (readonly, getter=isEphemeral) _Bool ephemeral;
@property (readonly) EFStringHash *stringHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_decodableClasses;
+ (void)addDecodableClass:(Class)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentedObjectID:(id)arg1;
- (id)cachedSelf;
- (id)initAsEphemeralID:(_Bool)arg1;
- (id)initAsEphemeralID:(_Bool)arg1 representedObjectID:(id)arg2;
- (void)_commonInitAsEphemeralID:(_Bool)arg1 representedObjectID:(id)arg2;

@end
