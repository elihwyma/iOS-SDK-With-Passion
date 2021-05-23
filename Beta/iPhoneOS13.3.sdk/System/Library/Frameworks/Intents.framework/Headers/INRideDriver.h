/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INPerson.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INRideDriver : INPerson <Swift>

{
    NSString *_rating;
}

@property (copy, nonatomic, readonly) NSString *rating;
@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(_Bool)arg7;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(_Bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13 phonemeData:(id)arg14;
- (id)initWithPhoneNumber:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 rating:(id)arg5;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 rating:(id)arg7 aliases:(id)arg8;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 rating:(id)arg7 phoneNumber:(id)arg8;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 rating:(id)arg5 phoneNumber:(id)arg6;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5;

@end
