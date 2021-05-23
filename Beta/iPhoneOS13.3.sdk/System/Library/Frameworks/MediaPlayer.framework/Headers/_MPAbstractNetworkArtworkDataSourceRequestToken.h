/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSURLRequest;

@interface _MPAbstractNetworkArtworkDataSourceRequestToken : NSObject <Swift>

{
    NSURLRequest *_request;
    struct CGSize _bestSize;
}

@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) struct CGSize bestSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 bestSize:(struct CGSize)arg2;

@end
