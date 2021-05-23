/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, UISearchBar;

__attribute__((visibility("hidden")))
@interface VSSearchBarDelegate : NSObject

{
    UISearchBar *_searchBar;
    NSString *_text;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;

@end
