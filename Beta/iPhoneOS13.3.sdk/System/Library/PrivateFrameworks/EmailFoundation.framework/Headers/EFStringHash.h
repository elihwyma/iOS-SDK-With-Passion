/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EFStringHash : NSObject

{
    long long _primitiveHash;
}

@property (nonatomic, readonly) long long primitiveHash;
@property (nonatomic, readonly) long long int64Value;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithHash:(long long)arg1;
- (id)redactedStringValue;
- (id)initWithMD5Digest:(id)arg1;
- (id)_hexStringFromHash:(long long)arg1;

@end
