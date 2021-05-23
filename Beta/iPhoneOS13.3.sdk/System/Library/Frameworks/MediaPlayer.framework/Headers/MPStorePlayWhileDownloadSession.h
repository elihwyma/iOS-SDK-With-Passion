/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSDictionary, NSURL;

@interface MPStorePlayWhileDownloadSession : NSObject <Swift>

{
    NSURL *_destinationURL;
    unsigned long long _downloadToken;
    NSDictionary *_purchaseBundle;
    NSURL *_sourceURL;
}

@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) unsigned long long downloadToken;
@property (copy, nonatomic) NSDictionary *purchaseBundle;
@property (copy, nonatomic) NSURL *sourceURL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
