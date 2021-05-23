/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Client.h>

@interface ML3ProcessClient : ML3Client

+ (id)sharedProcessClient;

- (id)init;
- (id)name;
- (id)bundleID;
- (int)processID;

@end
