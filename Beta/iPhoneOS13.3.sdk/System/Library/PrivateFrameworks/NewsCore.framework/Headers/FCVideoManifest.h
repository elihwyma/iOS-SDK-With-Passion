/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface FCVideoManifest : NSObject

{
    NSURL *_videoURL;
    NSString *_articleID;
}

@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) NSURL *videoURL;

- (id)init;
- (id)initWithArticleID:(id)arg1 videoURL:(id)arg2;

@end
