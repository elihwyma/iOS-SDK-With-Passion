/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject

{
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
    CDUnknownBlockType _languageUpdated;
}

@property (copy, nonatomic) CDUnknownBlockType languageUpdated;

- (id)init;
- (void)dealloc;
- (void)languagesChanged:(id)arg1;
- (void)languagePulled:(id)arg1;
- (void)willLoadLanguage:(id)arg1;
- (void)noteObject:(id)arg1 forLanguage:(id)arg2;
- (_Bool)shouldCacheObject:(id)arg1;

@end
