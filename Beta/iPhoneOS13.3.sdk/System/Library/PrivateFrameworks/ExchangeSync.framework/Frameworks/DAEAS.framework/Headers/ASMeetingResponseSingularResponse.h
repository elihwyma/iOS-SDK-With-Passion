/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASMeetingResponseSingularResponse : ASItem

{
    NSString *_requestId;
    NSNumber *_status;
    NSString *_eventId;
    NSString *_instanceId;
}

@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *instanceId;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;

@end
