/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject

{
    unsigned long long _downloadToken;
    NSString *_localFilePath;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property (nonatomic) unsigned long long downloadToken;
@property (copy, nonatomic) NSString *localFilePath;
@property (copy, nonatomic) NSArray *sinfs;
@property (copy, nonatomic) NSURL *sourceURL;

@end
