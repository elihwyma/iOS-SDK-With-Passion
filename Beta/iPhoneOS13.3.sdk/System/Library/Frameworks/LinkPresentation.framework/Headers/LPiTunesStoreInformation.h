/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, SKCloudServiceController;

__attribute__((visibility("hidden")))
@interface LPiTunesStoreInformation : NSObject

{
    SKCloudServiceController *_cloudServiceController;
    NSMapTable *_changeHandlers;
    unsigned long long _capabilities;
    _Bool _hasUpdatedCapabilities;
    NSString *_storefrontIdentifier;
}

@property (readonly) unsigned long long capabilities;
@property (copy, readonly) NSString *storefrontIdentifier;

+ (id)shared;
+ (unsigned long long)_convertCapabilities:(unsigned long long)arg1;
+ (id)_convertNewStorefrontIdentifier:(id)arg1;

- (id)init;
- (void)_setCapabilities:(unsigned long long)arg1;
- (void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterForStoreAvailablityChangesWithToken:(id)arg1;
- (unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1;
- (void)_setStorefrontIdentifier:(id)arg1;
- (void)_storefrontDidChangeNotification;
- (void)_capabilitiesDidChangeNotification;
- (void)_notifyChangeHandlers;

@end
