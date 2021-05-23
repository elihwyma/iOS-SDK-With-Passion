/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSCFBundle : NSObject

{
    struct __CFBundle *_cfBundle;
}

- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)bundleIdentifier;
- (id)initWithPath:(id)arg1;
- (id)infoDictionary;
- (id)localizedInfoDictionary;
- (id)bundlePath;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)executablePath;
- (id)_initWithCFBundle:(struct __CFBundle *)arg1;
- (id)_pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (struct __CFBundle *)cfBundle;

@end
