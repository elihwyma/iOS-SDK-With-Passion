/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SUCompletionItem : NSObject

{
    NSString *_alternateTitle;
    NSString *_title;
    NSURL *_url;
}

@property (nonatomic, readonly) NSString *alternateTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *URL;

- (id)init;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end
