/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CNHandleStringClassification : NSObject

{
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
    NSArray *_unknown;
}

@property (copy, nonatomic, readonly) NSArray *emailAddresses;
@property (copy, nonatomic, readonly) NSArray *phoneNumbers;
@property (copy, nonatomic, readonly) NSArray *unknown;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 unknown:(id)arg3;
- (id)initWithBuilder:(id)arg1;

@end
