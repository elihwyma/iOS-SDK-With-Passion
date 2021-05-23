/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface IMSticker : NSObject

{
    NSURL *_fileURL;
    struct NSString *_stickerGUID;
    struct NSString *_stickerPackGUID;
    NSString *_accessibilityLabel;
    NSString *_moodCategory;
    NSString *_stickerName;
    NSData *_recipe;
    NSString *_ballonBundleID;
    NSDictionary *_attributionInfo;
}

@property (retain, nonatomic) NSData *recipe;
@property (copy, nonatomic) NSString *ballonBundleID;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSString *stickerGUID;
@property (copy, nonatomic, readonly) NSString *stickerPackGUID;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *moodCategory;
@property (copy, nonatomic) NSString *stickerName;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStickerID:(struct NSString *)arg1 stickerPackID:(struct NSString *)arg2 fileURL:(id)arg3 accessibilityLabel:(id)arg4 moodCategory:(id)arg5 stickerName:(id)arg6;
- (id)initWithStickerPropertyDictionary:(id)arg1 stickerPackID:(struct NSString *)arg2 stickerPackBundlePath:(id)arg3;

@end
