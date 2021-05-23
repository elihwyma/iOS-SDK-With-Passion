/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSString;

@interface HDDemoData : NSObject

{
    NSString *_demoDataPath;
    NSFileManager *_fileManager;
}

+ (_Bool)shouldUseDemoDataDirectory;
+ (_Bool)willBeGeneratingDemoData;
+ (id)demoDataDirectory;

- (id)_directoryPath;
- (id)initWithProfileType:(long long)arg1;
- (_Bool)_resetDemoDataDB;

@end
