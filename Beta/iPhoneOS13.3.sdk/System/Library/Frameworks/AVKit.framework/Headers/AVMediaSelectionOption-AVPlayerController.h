/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVMediaSelectionOption.h>

@class NSNumber, NSString;

@interface AVMediaSelectionOption (AVPlayerController)

@property (readonly, getter=isAC3Only) _Bool AC3Only;
@property (readonly, getter=isMain) _Bool main;
@property (readonly, getter=isSDH) _Bool SDH;
@property (readonly, getter=isCC) _Bool CC;
@property (readonly, getter=isEasyReader) _Bool easyReader;
@property (readonly, getter=isAuxiliary) _Bool auxiliary;
@property (readonly) NSNumber *avkit_persistentIdentifier;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSString *shortLocalizedDisplayName;
@property (nonatomic, readonly) NSString *mediaRemoteIdentifier;

+ (id)avkit_offOption;
+ (id)avkit_autoOption;

- (long long)languageCompare:(id)arg1 currentLanguageCode:(id)arg2 currentLanguageIdentifier:(id)arg3;
- (id)avkit_title;

@end
