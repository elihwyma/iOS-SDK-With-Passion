/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <Swift>

{
    id _private;
}

@property (copy) NSString *namePrefix;
@property (copy) NSString *givenName;
@property (copy) NSString *middleName;
@property (copy) NSString *familyName;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)_allProperties;
+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(_Bool)arg1;
+ (id)_allComponents;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToComponents:(id)arg1;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(_Bool)arg1;
- (_Bool)_isEmpty;

@end
