/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SUCompletionsResponse : NSObject

{
    NSArray *_completionItems;
    NSString *_title;
}

@property (nonatomic, readonly) NSArray *completionItems;
@property (nonatomic, readonly) NSString *title;

- (id)init;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end
