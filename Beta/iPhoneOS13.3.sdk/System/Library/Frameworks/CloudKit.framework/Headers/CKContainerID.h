/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

@interface CKContainerID : NSObject

{
    NSString *_containerIdentifier;
    long long _environment;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) long long environment;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithContainerIdentifier:(id)arg1 environment:(long long)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)CKPropertiesDescription;

@end
