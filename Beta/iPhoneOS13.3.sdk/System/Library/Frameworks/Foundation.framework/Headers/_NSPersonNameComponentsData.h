/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSPersonNameComponents, NSString;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsData : NSObject <Swift>

{
    NSString *_givenName;
    NSString *_familyName;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    NSPersonNameComponents *_phoneticRepresentation;
}

@property (copy) NSString *givenName;
@property (copy) NSString *familyName;
@property (copy) NSString *middleName;
@property (copy) NSString *namePrefix;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_freeIvars;

@end
