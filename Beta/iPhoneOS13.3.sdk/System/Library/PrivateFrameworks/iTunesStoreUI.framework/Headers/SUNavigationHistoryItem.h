/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, SSURLRequestProperties;

@interface SUNavigationHistoryItem : NSObject

{
    NSString *_title;
    SSURLRequestProperties *_urlRequestProperties;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) SSURLRequestProperties *URLRequestProperties;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
