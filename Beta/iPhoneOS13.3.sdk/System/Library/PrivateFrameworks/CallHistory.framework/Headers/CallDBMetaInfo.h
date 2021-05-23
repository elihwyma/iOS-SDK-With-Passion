/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CallDBMetaInfo : NSObject

{
    NSURL *_dbInfoPrefFile;
}

@property (retain) NSURL *dbInfoPrefFile;

- (id)initWithURL:(id)arg1;
- (long long)readDatabaseVersion:(_Bool)arg1;
- (_Bool)validateInfo:(_Bool)arg1;
- (void)writeDatabaseVersion:(long long)arg1 isTemp:(_Bool)arg2;

@end
