/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSDictionary, NSNumber, NSString;

@interface ASChangedCollectionLeaf : ASItem

{
    _Bool _isResponse;
    _Bool _validateOpeningTokens;
    unsigned long long _changeType;
    NSString *_serverID;
    NSString *_instanceID;
    NSString *_clientID;
    NSString *_parentClientID;
    NSNumber *_status;
    NSDictionary *_applicationData;
}

@property (nonatomic) _Bool isResponse;
@property (nonatomic) _Bool validateOpeningTokens;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *serverID;
@property (retain, nonatomic) NSString *instanceID;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *parentClientID;
@property (copy, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSDictionary *applicationData;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dataclass;
- (void)loadClientIDs;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;

@end
