/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASResolveRecipientsAvailabilityItem, ASResolveRecipientsCertificatesItem, NSString;

@interface ASResolveRecipientsSingleRecipientItem : ASItem

{
    NSString *_emailAddress;
    ASResolveRecipientsCertificatesItem *_certificates;
    ASResolveRecipientsAvailabilityItem *_availability;
}

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) ASResolveRecipientsCertificatesItem *certificates;
@property (retain, nonatomic) ASResolveRecipientsAvailabilityItem *availability;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;

@end
