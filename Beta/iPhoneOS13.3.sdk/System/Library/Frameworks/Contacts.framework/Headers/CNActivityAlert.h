/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface CNActivityAlert : NSObject <Swift>

{
    _Bool _ignoreMute;
    NSString *_sound;
    NSString *_vibration;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSString *vibration;
@property (nonatomic) _Bool ignoreMute;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValid:(id *)arg1;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(_Bool)arg3 userInfo:(id)arg4;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(_Bool)arg3;

@end
