/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSFileSecurity.h>

__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity

{
    struct _filesec *_filesec;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)__new:(struct _filesec *)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _filesec *)_filesec;
- (_Bool)getOwner:(unsigned int *)arg1;
- (_Bool)setOwner:(unsigned int)arg1;
- (_Bool)getGroup:(unsigned int *)arg1;
- (_Bool)setGroup:(unsigned int)arg1;
- (_Bool)getMode:(unsigned short *)arg1;
- (_Bool)setMode:(unsigned short)arg1;
- (_Bool)getOwnerUUID:(unsigned char (*)[16])arg1;
- (_Bool)setOwnerUUID:(unsigned char [16])arg1;
- (_Bool)getGroupUUID:(unsigned char (*)[16])arg1;
- (_Bool)setGroupUUID:(unsigned char [16])arg1;
- (_Bool)copyAccessControlList:(struct _acl **)arg1;
- (_Bool)setAccessControlList:(struct _acl *)arg1;
- (_Bool)clearProperties:(unsigned long long)arg1;

@end
