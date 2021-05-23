/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BSProcessHandle, NSString;

@interface UISceneOpenURLOptions : NSObject

{
    NSString *_sourceApp;
    BSProcessHandle *_sourceProcessHandle;
    id _annotation;
    _Bool _openInPlace;
    _Bool _openAsDownload;
}

@property (nonatomic, readonly) BSProcessHandle *_sourceProcessHandle;
@property (nonatomic, readonly) _Bool _openAsDownload;
@property (nonatomic, readonly) NSString *sourceApplication;
@property (nonatomic, readonly) id annotation;
@property (nonatomic, readonly) _Bool openInPlace;

+ (id)_optionsFromDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(_Bool)arg4 openAsDownload:(_Bool)arg5;
- (id)_initWithSourceApplication:(id)arg1 processHandle:(id)arg2 annotation:(id)arg3 openInPlace:(_Bool)arg4;

@end
