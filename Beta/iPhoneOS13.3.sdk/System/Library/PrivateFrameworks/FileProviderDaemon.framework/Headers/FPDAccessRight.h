/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDExtension;

__attribute__((visibility("hidden")))
@interface FPDAccessRight : NSObject

{
    unsigned long long _accessLevel;
    FPDExtension *_provider;
}

@property (nonatomic, readonly) unsigned long long level;
@property (weak, nonatomic, readonly) FPDExtension *provider;

- (id)init;
- (void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3;
- (id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4;
- (id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3;

@end
