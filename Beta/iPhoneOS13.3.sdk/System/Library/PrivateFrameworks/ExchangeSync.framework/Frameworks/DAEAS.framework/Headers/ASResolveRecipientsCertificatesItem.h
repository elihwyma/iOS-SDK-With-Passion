/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsCertificatesItem : ASItem

{
    NSNumber *_certCount;
    NSNumber *_recipientCount;
    NSNumber *_easStatus;
    NSMutableArray *_mCertificates;
}

@property (retain, nonatomic) NSMutableArray *mCertificates;
@property (retain, nonatomic) NSNumber *certCount;
@property (retain, nonatomic) NSNumber *recipientCount;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (nonatomic, readonly) NSArray *certificates;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)addCertificateString:(id)arg1;

@end
