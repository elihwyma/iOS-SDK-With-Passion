/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SUItemContentRating;

@interface SUNavigationMenuItem : NSObject

{
    SUItemContentRating *_contentRating;
    NSString *_title;
    NSURL *_url;
}

@property (nonatomic, readonly) SUItemContentRating *contentRating;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *URL;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
