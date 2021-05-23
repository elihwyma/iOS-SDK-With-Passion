/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCItemID, BRCUserRowID, BRFieldCKInfo, BRMangledID, NSData, NSString;

@interface BRCStatInfo : NSObject <Swift>

{
    BRFieldCKInfo *_ckInfo;
    BRCItemID *_parentID;
    BOOL _state;
    BOOL _type;
    BOOL _mode;
    long long _birthtime;
    long long _lastUsedTime;
    long long _favoriteRank;
    NSString *_logicalName;
    NSString *_aliasTarget;
    _Bool _hiddenExt;
    NSData *_xattrSignature;
    NSData *_lazyXattr;
    NSData *_finderTags;
    NSString *_trashPutBackPath;
    BRCItemID *_trashPutBackParentID;
    BRCUserRowID *_creatorRowID;
}

@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (retain, nonatomic) BRCItemID *parentID;
@property (nonatomic) BOOL state;
@property (nonatomic) BOOL type;
@property (nonatomic) BOOL mode;
@property (retain, nonatomic) NSString *logicalName;
@property (nonatomic) long long birthtime;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic) long long favoriteRank;
@property (nonatomic, getter=isHiddenExt) _Bool hiddenExt;
@property (retain, nonatomic) NSData *finderTags;
@property (retain, nonatomic) NSData *xattrSignature;
@property (nonatomic, readonly) NSString *representableName;
@property (nonatomic, readonly) BRMangledID *_aliasTargetMangledID;
@property (nonatomic, readonly) NSString *aliasTarget;
@property (retain, nonatomic) NSData *lazyXattr;
@property (nonatomic, readonly) _Bool iWorkShareable;
@property (retain, nonatomic) NSString *trashPutBackPath;
@property (retain, nonatomic) BRCItemID *trashPutBackParentID;
@property (retain, nonatomic) BRCUserRowID *creatorRowID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (_Bool)isExecutable;
- (_Bool)isWritable;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)_aliasTargetItemID;
- (void)_updateAliasTarget:(id)arg1;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (id)initWithStatInfo:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (_Bool)check:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (_Bool)isEtagEqual:(id)arg1;

@end
