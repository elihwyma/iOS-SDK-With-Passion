/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <Swift>

{
    _Bool _nameFieldFirstNameOptional;
    _Bool _nameFieldLastNameOptional;
    _Bool _nameFieldShouldBeDisplayed;
    _Bool _emailAddressFieldShouldBeDisplayed;
    _Bool _phoneNumberFieldShouldBeDisplayed;
    _Bool _nameEditable;
    _Bool _emailAddressEditable;
    _Bool _phoneNumberEditable;
}

@property (nonatomic) _Bool nameFieldFirstNameOptional;
@property (nonatomic) _Bool nameFieldLastNameOptional;
@property (nonatomic) _Bool nameFieldShouldBeDisplayed;
@property (nonatomic) _Bool emailAddressFieldShouldBeDisplayed;
@property (nonatomic) _Bool phoneNumberFieldShouldBeDisplayed;
@property (nonatomic) _Bool nameEditable;
@property (nonatomic) _Bool emailAddressEditable;
@property (nonatomic) _Bool phoneNumberEditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;

@end
