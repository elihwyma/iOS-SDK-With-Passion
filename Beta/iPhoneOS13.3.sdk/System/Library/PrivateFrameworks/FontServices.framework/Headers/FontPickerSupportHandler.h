/*
 Image: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@interface FontPickerSupportHandler : NSObject

{
    NSXPCListener *_listener;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)ping:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)activateFontsForFontPickerClient:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)locallyActivatedFontFiles:(CDUnknownBlockType)arg1;

@end
