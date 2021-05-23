/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASFolder : ASItem

{
    _Bool _renameOnCollision;
    int _folderType;
    int _localID;
    NSString *_serverID;
    NSString *_parentID;
    NSString *_displayName;
    NSString *_localUUID;
    unsigned long long _changeType;
    long long _dataclass;
}

@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) int folderType;
@property (nonatomic) long long dataclass;
@property (nonatomic) int localID;
@property (copy, nonatomic) NSString *serverID;
@property (copy, nonatomic) NSString *localUUID;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic) _Bool renameOnCollision;

+ (_Bool)supportsSecureCoding;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)asParseRules;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)_folderTypeString;
- (void)setFolderTypeNumber:(id)arg1;
- (_Bool)mayContainDataclasses:(long long)arg1;
- (id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5;

@end
