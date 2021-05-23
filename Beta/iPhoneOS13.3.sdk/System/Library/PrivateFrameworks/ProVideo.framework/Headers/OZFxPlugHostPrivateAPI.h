/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface OZFxPlugHostPrivateAPI : NSObject

{
    struct OZFxPlugSharedBase *_plugin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlugin:(struct OZFxPlugSharedBase *)arg1;
- (float)blendingGamma;
- (_Bool)navigateToTime:(CDUnion_baaf6063)arg1;
- (_Bool)giveEffectUIFocus;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundle:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithIdentifier:(id)arg4;
- (id)URLForHostResource:(id)arg1 withExtension:(id)arg2 subDirectory:(id)arg3 inBundleWithURL:(id)arg4;
- (void)pluginXPCConnectionBroken:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;

@end
