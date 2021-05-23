/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString, NSURL;

@interface IMStickerPack : NSObject

{
    NSMutableSet *_stickers;
    struct NSString *_GUID;
    NSString *_name;
    NSURL *_displayAssetURL;
    NSURL *_fileURL;
    NSString *_appBundleIdentifier;
    NSString *_appVersion;
}

@property (copy, nonatomic) NSString *GUID;
@property (nonatomic, readonly) NSSet *stickers;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *displayAssetURL;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSString *appVersion;

- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithGUID:(struct NSString *)arg1 name:(id)arg2 displayAssetURL:(id)arg3 fileURL:(id)arg4 appBundleIdentifier:(id)arg5 appVersion:(id)arg6;
- (id)_generatePackGUIDWithPackID:(id)arg1 appBundleID:(id)arg2 appVersion:(id)arg3;
- (void)addSticker:(id)arg1;
- (id)initWithStickerPackProperties:(id)arg1 stickerPackBundleURL:(id)arg2 appBundleIdentifier:(id)arg3 appVersion:(id)arg4;

@end
