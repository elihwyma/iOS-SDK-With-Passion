/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSUTemporaryDirectory : NSObject

{
    NSString *_path;
    _Bool _leak;
}

- (id)init;
- (void)dealloc;
- (id)path;
- (id)URL;
- (id)initWithSignature:(id)arg1;
- (void)leakTemporaryDirectory;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2;
- (void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2;

@end
