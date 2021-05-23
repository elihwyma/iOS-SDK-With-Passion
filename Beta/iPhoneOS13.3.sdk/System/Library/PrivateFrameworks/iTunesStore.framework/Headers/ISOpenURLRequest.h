/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface ISOpenURLRequest : NSObject

{
    _Bool _isITunesStoreURL;
    NSString *_targetIdentifier;
    NSString *_urlBagKey;
    NSURL *_url;
    _Bool _interruptsKeybagRefresh;
}

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLBagKey;
@property (nonatomic) _Bool interruptsKeybagRefresh;
@property (nonatomic, getter=isITunesStoreURL) _Bool ITunesStoreURL;
@property (copy, nonatomic) NSString *targetIdentifier;

+ (id)openURLRequestWithURL:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLBagKey:(id)arg1;

@end
