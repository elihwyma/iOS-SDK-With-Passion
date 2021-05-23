/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSString;

@interface TKTokenID : NSObject

{
    NSString *_stringRepresentation;
}

@property (readonly) NSString *stringRepresentation;
@property (readonly) NSString *classID;
@property (readonly) NSString *instanceID;

+ (_Bool)supportsSecureCoding;
+ (id)encodedObjectID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenID:(id)arg1;
- (id)initWithClassID:(id)arg1 instanceID:(id)arg2;
- (id)decodedObjectID:(id)arg1 error:(id *)arg2;

@end
