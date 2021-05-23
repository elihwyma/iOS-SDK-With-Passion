/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSString, PKDiscoveryEngagementMessageAction;

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <Swift>

{
    _Bool _reportIdentifierToAggd;
    long long _type;
    long long _passQualifier;
    NSString *_titleKey;
    NSString *_messageKey;
    NSDictionary *_iconURLs;
    PKDiscoveryEngagementMessageAction *_action;
    NSString *_localizedTitle;
    NSString *_localizedMessage;
}

@property (nonatomic) long long type;
@property (nonatomic) long long passQualifier;
@property (retain, nonatomic) NSString *titleKey;
@property (retain, nonatomic) NSString *messageKey;
@property (retain, nonatomic) NSDictionary *iconURLs;
@property (retain, nonatomic) PKDiscoveryEngagementMessageAction *action;
@property (nonatomic, getter=canReportIdentifierToAggd) _Bool reportIdentifierToAggd;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedMessage;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)updateForRuleResult:(_Bool)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)updateWithDiscoveryEngagementMessage:(id)arg1;

@end
