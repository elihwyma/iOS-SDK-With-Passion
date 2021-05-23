/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString;

@protocol INSearchForAccountsIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *accountNickname;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) INSpeakableString *organizationName;
@property (nonatomic) long long requestedBalanceType;

- (unsigned short)init;

@end
