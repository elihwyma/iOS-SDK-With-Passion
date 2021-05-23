/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASItemOperationsFetchAttachmentProperties : ASItem

{
    NSString *_attachmentContentType;
    NSString *_data;
}

@property (retain, nonatomic) NSString *attachmentContentType;
@property (retain, nonatomic) NSString *data;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

@end
