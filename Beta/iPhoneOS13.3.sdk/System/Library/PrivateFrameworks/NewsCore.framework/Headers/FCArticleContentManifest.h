/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFlintManifest, FCVideoManifest, FCWebManifest, NSString;

@interface FCArticleContentManifest : NSObject

{
    NSString *_articleID;
    unsigned long long _contentType;
    FCWebManifest *_webManifest;
    FCFlintManifest *_flintManifest;
    FCVideoManifest *_videoManifest;
}

@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) FCWebManifest *webManifest;
@property (retain, nonatomic) FCFlintManifest *flintManifest;
@property (retain, nonatomic) FCVideoManifest *videoManifest;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithArticleID:(id)arg1 flintManifest:(id)arg2;
- (id)initWithContext:(id)arg1 articleRecord:(id)arg2;
- (id)initWithArticleID:(id)arg1 webManifest:(id)arg2;
- (id)initWithArticleID:(id)arg1 videoManifest:(id)arg2;
- (id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2;

@end
