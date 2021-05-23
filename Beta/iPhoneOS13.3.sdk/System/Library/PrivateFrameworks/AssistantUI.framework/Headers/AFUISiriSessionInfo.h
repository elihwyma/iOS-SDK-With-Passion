/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class AFAccount, NSNumber, NSString;

@interface AFUISiriSessionInfo : NSObject

{
    NSString *_identifier;
    NSString *_assistantVersion;
    AFAccount *_activeAccount;
    NSNumber *_userAccountCount;
}

@property (copy, nonatomic) NSString *assistantVersion;
@property (copy, nonatomic) AFAccount *activeAccount;
@property (copy, nonatomic) NSNumber *userAccountCount;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)setAssistantVersionAndGenerateLightweightInfo:(id)arg1;
- (id)setActiveAccountAndGenerateLightweightInfo:(id)arg1;
- (id)setUserAccountCountGenerateLightweightInfo:(long long)arg1;
- (id)_setPropertyValue:(id)arg1 withSelector:(SEL)arg2;
- (id)_strippedInfo;
- (_Bool)applyInfo:(id)arg1;

@end
