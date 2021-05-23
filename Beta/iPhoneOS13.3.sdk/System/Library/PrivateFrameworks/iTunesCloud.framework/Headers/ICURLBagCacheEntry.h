/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICURLBag;

@interface ICURLBagCacheEntry : NSObject

{
    double _expirationTime;
    ICURLBag *_urlBag;
}

@property (nonatomic) double expirationTime;
@property (retain) ICURLBag *urlBag;

- (id)initWithURLBag:(id)arg1 expirationTime:(double)arg2;

@end
