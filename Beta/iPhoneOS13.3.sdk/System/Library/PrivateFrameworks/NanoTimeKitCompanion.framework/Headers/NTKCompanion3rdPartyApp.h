/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NRDevice, NSArray, NSString, NSURL;

@interface NTKCompanion3rdPartyApp : NTKCompanionApp

{
    _Bool _installed;
    _Bool _galleryBundlesLoaded;
    NSString *_complicationClientIdentifier;
    NSURL *_urlToWatchKitBundle;
    NRDevice *_device;
    NSURL *_urlToComplicationBundle;
    NSArray *_supportedFamilies;
    NSString *_uniqueID;
}

@property (retain, nonatomic) NRDevice *device;
@property (retain, nonatomic) NSString *complicationClientIdentifier;
@property (retain, nonatomic) NSURL *urlToComplicationBundle;
@property (retain, nonatomic) NSURL *urlToWatchKitBundle;
@property (retain, nonatomic) NSArray *supportedFamilies;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic, getter=isInstalled) _Bool installed;
@property (nonatomic) _Bool galleryBundlesLoaded;

+ (id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2;
+ (id)companion3rdPartyRemoteApp:(id)arg1 device:(id)arg2;
+ (_Bool)_isValidApplication:(id)arg1;
+ (_Bool)_isValidComplicationsInformation:(id)arg1;
+ (id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)install;
- (id)complication;
- (_Bool)applicationHasBeenUpdated:(id)arg1;
- (id)_initWithDevice:(id)arg1 remoteApplication:(id)arg2 galleryBundles:(id)arg3 watchKitBundle:(id)arg4;
- (id)_initWithWatchAppId:(id)arg1 containerAppId:(id)arg2 complicationClientId:(id)arg3;
- (_Bool)_installStateFromAppConduitInstallState:(long long)arg1;
- (id)appRegistrationDate;

@end
