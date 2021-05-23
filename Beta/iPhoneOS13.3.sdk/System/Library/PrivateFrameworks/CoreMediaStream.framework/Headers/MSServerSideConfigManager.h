/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSMediaStreamDaemon, MSServerSideConfigProtocol, NSDictionary, NSString;

@interface MSServerSideConfigManager : NSObject

{
    NSString *_personID;
    NSDictionary *_config;
    MSMediaStreamDaemon *_daemon;
    NSString *_configPath;
    MSServerSideConfigProtocol *_protocol;
    int _state;
}

@property (nonatomic, readonly) NSString *personID;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)forgetPersonID:(id)arg1;
+ (id)configManagerForPersonID:(id)arg1;
+ (id)existingConfigManagerForPersonID:(id)arg1;
+ (void)abortAllActivities;
+ (int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3;
+ (double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3;
+ (long long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;
+ (long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;
+ (id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3;

- (void)dealloc;
- (void)abort;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3;
- (void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)refreshConfiguration;

@end
