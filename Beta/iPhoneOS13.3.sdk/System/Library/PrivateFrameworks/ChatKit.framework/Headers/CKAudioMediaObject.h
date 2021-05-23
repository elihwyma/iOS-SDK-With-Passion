/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAVMediaObject.h>

@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject

@property (retain, nonatomic) NSArray *powerLevels;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (_Bool)shouldUseTranscoderGeneratedPreviewSize;
+ (id)_cachedPowerLevelsForKey:(id)arg1;
+ (void)_cachePowerLevels:(id)arg1 forKey:(id)arg2;
+ (id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4;
+ (Class)__ck_attachmentItemClass;

- (int)mediaType;
- (id)previewItemTitle;
- (void)export:(id)arg1;
- (_Bool)canExport;
- (_Bool)shouldBeQuickLooked;
- (id)waveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewFilenameExtension;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)coloredBalloonViewClass;
- (_Bool)isLikeAudioMessage;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1;
- (id)composeWaveformForWidth:(double)arg1 orientation:(BOOL)arg2;

@end
