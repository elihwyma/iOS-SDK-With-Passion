/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCUserRowID, BRFieldCKInfo, NSData, NSNumber, NSSet, NSString;

@interface BRCVersion : NSObject <Swift>

{
    BRFieldCKInfo *_ckInfo;
    long long _mtime;
    NSString *_originalPOSIXName;
    long long _size;
    long long _thumbnailSize;
    NSData *_thumbnailSignature;
    NSData *_contentSignature;
    NSData *_xattrSignature;
    NSData *_quarantineInfo;
    NSSet *_conflictLoserEtags;
    NSData *_lazyXattr;
    NSNumber *_editedSinceShared;
    NSNumber *_lastEditorDeviceOrUserRowID;
    NSString *_lastEditorDeviceName;
}

@property (nonatomic) long long mtime;
@property (retain, nonatomic) NSString *originalPOSIXName;
@property (nonatomic) long long size;
@property (nonatomic) long long thumbnailSize;
@property (retain, nonatomic) NSData *xattrSignature;
@property (retain, nonatomic) NSData *quarantineInfo;
@property (retain, nonatomic) NSData *contentSignature;
@property (retain, nonatomic) NSData *thumbnailSignature;
@property (retain, nonatomic) NSSet *conflictLoserEtags;
@property (retain, nonatomic) NSNumber *lastEditorDeviceOrUserRowID;
@property (retain, nonatomic) NSNumber *lastEditorDeviceRowID;
@property (retain, nonatomic) NSString *lastEditorDeviceName;
@property (retain, nonatomic) BRCUserRowID *lastEditorRowID;
@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (nonatomic, readonly) _Bool isPackage;
@property (nonatomic, readonly) _Bool hasThumbnail;
@property (retain, nonatomic) NSData *lazyXattr;
@property (retain, nonatomic) NSNumber *editedSinceShared;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)uti;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (_Bool)check:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (_Bool)isEtagEqual:(id)arg1;
- (_Bool)_hasLastEditorDeviceRowID;
- (_Bool)_hasLastEditorRowID;
- (id)lastEditorUserIdentityWithDB:(id)arg1;
- (id)lastEditorDeviceDisplayNameWithDB:(id)arg1;
- (id)lastEditorDisplayNameWithDB:(id)arg1;
- (id)displayNameWithoutExtension:(_Bool)arg1;
- (id)additionNameForItemID:(id)arg1 zoneID:(id)arg2;
- (_Bool)isSmallAndMostRecentClientsGenerateThumbnails;

@end
