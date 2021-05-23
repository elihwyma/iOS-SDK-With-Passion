/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEConfiguration, NEVPNConnection, NEVPNProtocol, NSArray, NSString;

@interface NEVPNManager : NSObject

{
    _Bool _hasLoaded;
    _Bool _notificationSent;
    NEVPNConnection *_connection;
    NEConfiguration *_configuration;
}

@property (copy) NEConfiguration *configuration;
@property _Bool hasLoaded;
@property _Bool notificationSent;
@property (copy) NSArray *onDemandRules;
@property (getter=isOnDemandEnabled) _Bool onDemandEnabled;
@property (copy) NSString *localizedDescription;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;
@property (readonly) NEVPNConnection *connection;
@property (getter=isEnabled) _Bool enabled;

+ (id)sharedManager;
+ (id)loadedManagers;
+ (id)mapError:(id)arg1;

- (id)init;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithGrade:(long long)arg1 connection:(id)arg2 tunnelType:(long long)arg3;
- (_Bool)isProtocolTypeValid:(long long)arg1;
- (void)additionalSetup;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
