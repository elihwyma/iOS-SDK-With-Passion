/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SUWebScriptReloadContext : NSObject

{
    NSURL *_URL;
    NSString *_referringUserAgent;
    NSURL *_referrerURL;
}

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *referringUserAgent;
@property (retain, nonatomic) NSURL *referrerURL;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyScriptDictionaryRepresentation;

@end
