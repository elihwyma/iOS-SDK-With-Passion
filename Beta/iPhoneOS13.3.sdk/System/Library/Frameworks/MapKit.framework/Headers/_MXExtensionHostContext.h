/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MXExtensionContext.h>

@class NSString;

@protocol _MXExtensionURLHandling;

__attribute__((visibility("hidden")))
@interface _MXExtensionHostContext : _MXExtensionContext

{
    id <_MXExtensionURLHandling> _URLHandlingDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <_MXExtensionURLHandling> URLHandlingDelegate;

- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
