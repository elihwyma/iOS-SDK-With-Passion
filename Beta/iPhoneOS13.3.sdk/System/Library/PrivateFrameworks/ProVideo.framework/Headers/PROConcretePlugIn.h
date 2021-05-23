/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PROPlugIn.h>

@class NSBundle, NSDictionary, NSString, NSURL, PROPlugInGroup;

@protocol PKPlugIn, PROPlugInDelegate;

@interface PROConcretePlugIn : PROPlugIn

{
    NSBundle *bundle;
    struct __CFUUID *uuidRef;
    NSDictionary *infoDictionary;
    PROPlugInGroup *group;
    NSString *localizationTableName;
    NSURL *helpURL;
    id sharedInstance;
    struct {
        unsigned int loadedInstanceEver:1;
        unsigned int checkedForIcon:1;
        unsigned int checkedForHelp:1;
    } plugInFlags;
    id <PROPlugInDelegate> delegate;
    id <PKPlugIn> pluginKitPlug;
    _Bool entirelyOutOfProcess;
    _Bool _isBlocked;
    NSString *_blockedLookupKey;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)infoDictionary;
- (id)version;
- (struct __CFUUID *)uuid;
- (id)bundle;
- (id)displayName;
- (_Bool)isBlocked;
- (id)vendorName;
- (id)className;
- (id)group;
- (id)uuidString;
- (void)setIsBlocked:(_Bool)arg1;
- (void)reportError:(id)arg1;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (id)implementedProtocols;
- (id)blockedLookupKey;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 pluginKitPlug:(id)arg4;
- (_Bool)isEqualToPlugIn:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3;
- (id)sharedPlugInInstance;
- (id)helpURL;
- (id)infoString;
- (id)apiUsedByPlugInForProtocol:(id)arg1;

@end
