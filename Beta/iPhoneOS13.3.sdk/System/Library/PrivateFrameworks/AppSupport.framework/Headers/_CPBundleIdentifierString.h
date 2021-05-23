/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSString.h>

@interface _CPBundleIdentifierString : NSString

{
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    _Bool _isProcessName;
}

- (void)dealloc;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (void)_loadBundleIdentifierOrProcessName;
- (id)_initWithExecutablePath:(id)arg1;
- (_Bool)_isProcessName;

@end
