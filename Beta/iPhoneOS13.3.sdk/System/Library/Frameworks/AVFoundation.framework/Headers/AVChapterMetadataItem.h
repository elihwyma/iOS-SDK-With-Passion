/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVChapterMetadataItem : AVMetadataItem

{
    AVChapterMetadataItemInternal *_privChapter;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)key;
- (id)locale;
- (id)languageCode;
- (id)value;
- (id)startDate;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)time;
- (id)dataType;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)extendedLanguageTag;
- (void)cancelLoading;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)keySpace;
- (id)extraAttributes;
- (id)commonKey;
- (_Bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (long long)_valueStatus;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(CDStruct_1b6d18a9)arg8 duration:(CDStruct_1b6d18a9)arg9;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2;
- (void)_takeValueFrom:(id)arg1;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;

@end
