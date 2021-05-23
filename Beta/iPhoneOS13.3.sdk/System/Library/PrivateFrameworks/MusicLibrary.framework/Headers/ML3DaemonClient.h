/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Client.h>

@interface ML3DaemonClient : ML3Client

+ (id)sharedDaemonClient;

- (id)init;
- (id)name;
- (id)bundleID;
- (int)processID;

@end
