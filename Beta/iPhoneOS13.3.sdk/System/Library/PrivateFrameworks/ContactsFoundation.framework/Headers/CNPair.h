/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNPair : NSObject

{
    id _first;
    id _second;
}

@property (readonly) id first;
@property (readonly) id second;

+ (_Bool)supportsSecureCoding;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
