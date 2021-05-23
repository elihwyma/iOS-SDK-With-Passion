/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface BRCDatabaseBackupManager : NSObject

{
    NSURL *_userURL;
    NSURL *_outputUserURL;
    NSURL *_destinationDirectory;
}

@property (retain, nonatomic) NSURL *userURL;
@property (retain, nonatomic) NSURL *outputUserURL;
@property (retain, nonatomic) NSURL *destinationDirectory;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) NSArray *urlPropertiesToFetch;

- (id)initWithUserURL:(id)arg1 outputUserURL:(id)arg2;
- (id)desiredBackupDataDirectoryForUserURL:(id)arg1;
- (_Bool)enumerateRootURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)enumerateURL:(id)arg1 rootURL:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)backUpWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cleanOnDisk;

@end
