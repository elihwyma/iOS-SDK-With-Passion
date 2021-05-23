/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSDate, NSDictionary, NSURL, NSURLSession;

@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject

{
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;

- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_load;
- (double)_updateInterval;
- (void)_save;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (void)_setContents:(id)arg1;
- (void)refetchFromDisk;
- (void)check;

@end
