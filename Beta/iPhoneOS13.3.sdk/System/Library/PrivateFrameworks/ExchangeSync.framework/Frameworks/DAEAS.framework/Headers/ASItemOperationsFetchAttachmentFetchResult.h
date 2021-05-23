/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASItemOperationsFetchAttachmentProperties, NSNumber, NSString;

@interface ASItemOperationsFetchAttachmentFetchResult : ASItem

{
    NSNumber *_status;
    NSString *_fileReference;
    ASItemOperationsFetchAttachmentProperties *_properties;
}

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *fileReference;
@property (retain, nonatomic) ASItemOperationsFetchAttachmentProperties *properties;

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

@end
