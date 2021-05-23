/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INBalanceAmount, INSpeakableString, NSString;

@interface INPaymentAccount : NSObject <Swift>

{
    INSpeakableString *_nickname;
    NSString *_accountNumber;
    long long _accountType;
    INSpeakableString *_organizationName;
    INBalanceAmount *_balance;
    INBalanceAmount *_secondaryBalance;
}

@property (copy, nonatomic, readonly) INSpeakableString *nickname;
@property (copy, nonatomic, readonly) NSString *accountNumber;
@property (nonatomic, readonly) long long accountType;
@property (copy, nonatomic, readonly) INSpeakableString *organizationName;
@property (copy, nonatomic, readonly) INBalanceAmount *balance;
@property (copy, nonatomic, readonly) INBalanceAmount *secondaryBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(long long)arg3 organizationName:(id)arg4;

@end
