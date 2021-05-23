/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, _MXExtensionProvider;

@protocol OS_dispatch_queue;

@interface _MXExtensionServiceCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_extlock;
    NSDictionary *_extensions;
    NSDictionary *_mapsExtensions;
    NSDictionary *_containingAppProxies;
    _MXExtensionProvider *_extensionProvider;
}

@property (copy, nonatomic) NSDictionary *extensions;
@property (copy, nonatomic) NSDictionary *mapsExtensions;
@property (copy, nonatomic) NSDictionary *containingAppProxies;
@property (weak, nonatomic, readonly) _MXExtensionProvider *extensionProvider;

- (id)initWithExtensionProvider:(id)arg1;
- (void)receivedExtensions:(id)arg1 error:(id)arg2;
- (id)allExtensions;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)_clearExtensions;
- (id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1;

@end
