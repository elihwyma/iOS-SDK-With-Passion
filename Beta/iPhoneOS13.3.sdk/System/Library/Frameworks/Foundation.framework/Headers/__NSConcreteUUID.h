/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSUUID.h>

__attribute__((visibility("hidden")))
@interface __NSConcreteUUID : NSUUID

{
    unsigned char _uuidBytes[16];
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (id)UUIDString;
- (id)initWithUUIDString:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (CDStruct_bd2f613f)_cfUUIDBytes;

@end
