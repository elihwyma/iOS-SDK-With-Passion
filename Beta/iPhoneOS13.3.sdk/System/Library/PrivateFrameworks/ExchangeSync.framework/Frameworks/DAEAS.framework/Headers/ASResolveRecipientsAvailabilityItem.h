/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem

{
    NSNumber *_easStatus;
    NSString *_mergedFreeBusy;
}

@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (retain, nonatomic) NSString *mergedFreeBusy;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;

@end
