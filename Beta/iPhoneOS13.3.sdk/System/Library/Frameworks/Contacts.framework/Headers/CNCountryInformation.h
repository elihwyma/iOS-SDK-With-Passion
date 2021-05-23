/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCountryInformation : NSObject <Swift>

{
    NSString *_isoCountryCode;
    NSString *_name;
    NSString *_phoneticName;
}

@property (copy, nonatomic, readonly) NSString *isoCountryCode;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *phoneticName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3;

@end
