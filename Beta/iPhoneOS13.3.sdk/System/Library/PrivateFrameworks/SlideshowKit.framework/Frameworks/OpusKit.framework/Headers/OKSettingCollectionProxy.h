/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OKSettingCollectionProxy : NSObject

{
    id _listOfObjects;
    CDUnknownBlockType _keyResolverBlock;
    NSString *_keyPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithObjects:(id)arg1 withKeyPath:(id)arg2;

@end
