/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PROPlugIn : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)infoDictionary;
- (id)version;
- (struct __CFUUID *)uuid;
- (id)bundle;
- (id)displayName;
- (_Bool)isBlocked;
- (id)className;
- (id)group;
- (void)setIsBlocked:(_Bool)arg1;
- (Class)plugInClass;
- (id)plugInInstance;
- (id)pluginKitPlug;
- (id)implementedProtocols;
- (id)blockedLookupKey;
- (_Bool)isEqualToPlugIn:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3;
- (void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3;
- (id)sharedPlugInInstance;
- (id)helpURL;
- (id)infoString;
- (id)apiUsedByPlugInForProtocol:(id)arg1;

@end
