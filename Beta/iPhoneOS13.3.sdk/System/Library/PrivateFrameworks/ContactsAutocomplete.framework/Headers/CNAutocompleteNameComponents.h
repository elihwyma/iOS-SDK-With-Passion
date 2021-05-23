/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject

{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_nickname;
    NSString *_nameSuffix;
}

@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *nickname;
@property (readonly) NSString *nameSuffix;

+ (id)contactKeys;
+ (id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
