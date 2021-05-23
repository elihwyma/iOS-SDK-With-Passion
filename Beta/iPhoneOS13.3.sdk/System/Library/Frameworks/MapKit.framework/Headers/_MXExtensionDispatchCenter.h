/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable, _MXExtensionProvider;

@protocol OS_dispatch_queue;

@interface _MXExtensionDispatchCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_lock;
    NSHashTable *_handlers;
    _MXExtensionProvider *_extensionProvider;
}

@property (weak, nonatomic, readonly) _MXExtensionProvider *extensionProvider;

- (id)initWithExtensionProvider:(id)arg1;
- (void)dispatchExtensions:(id)arg1 error:(id)arg2;
- (id)addExtensionsUpdateHandler:(CDUnknownBlockType)arg1;
- (void)removeExtensionUpdateHandler:(id)arg1;

@end
