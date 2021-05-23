/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SUItemLink : NSObject

{
    long long _linkTarget;
    long long _linkType;
    NSString *_title;
    NSURL *_url;
}

@property (nonatomic) long long linkTarget;
@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
