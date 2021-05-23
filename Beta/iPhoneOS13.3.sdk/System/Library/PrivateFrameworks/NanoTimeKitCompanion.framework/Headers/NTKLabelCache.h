/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NTKLabelCache : NSObject

{
    NSArray *_supportedLanguageCodes;
    NSString *_currentLanguageCode;
}

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (_Bool)setCurrentLanguageCode:(id)arg1;
- (_Bool)_localeChanged;
- (void)_legacy_removeOldAtlases;
- (id)_loadTextureForDevice:(id)arg1 withName:(id)arg2;
- (id)_nameForFaceStyle:(long long)arg1;
- (_Bool)forceLocaleUpdate;
- (id)labelForDevice:(id)arg1 text:(id)arg2 font:(long long)arg3 modifier:(id)arg4 padWithZeroes:(_Bool)arg5 filter:(_Bool)arg6;
- (id)labelForDevice:(id)arg1 faceStyle:(long long)arg2 number:(unsigned long long)arg3 fontSize:(double)arg4 paddedWithZeros:(_Bool)arg5;

@end
