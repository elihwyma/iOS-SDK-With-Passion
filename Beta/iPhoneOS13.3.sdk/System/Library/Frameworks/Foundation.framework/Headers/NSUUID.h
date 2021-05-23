/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSUUID : NSObject <Swift>

@property (copy, readonly) NSString *UUIDString;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)UUID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)getUUIDBytes:(unsigned char [16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char [16])arg1;
- (struct __CFString *)_cfUUIDString;

@end
