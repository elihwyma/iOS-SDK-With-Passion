/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSURL;

@interface ASAttachment : ASItem

{
    NSString *_name;
    NSNumber *_size;
    NSNumber *_method;
    NSString *_displayName;
    NSString *_contentId;
    NSString *_contentLocation;
    NSNumber *_isInline;
    NSNumber *_hasBase64Transfer;
    NSString *_clientId;
    NSURL *_localPath;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSNumber *method;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *contentLocation;
@property (copy, nonatomic) NSNumber *isInline;
@property (copy, nonatomic) NSNumber *hasBase64Transfer;
@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) NSURL *localPath;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isMostDefinitelyBase64ed;
- (void)setPercentEscapedName:(id)arg1;
- (void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2;

@end
