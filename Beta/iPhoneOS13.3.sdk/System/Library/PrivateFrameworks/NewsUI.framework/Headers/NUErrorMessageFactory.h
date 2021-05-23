/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCNetworkReachability, NSString;

@interface NUErrorMessageFactory : NSObject

{
    FCNetworkReachability *_networkReachability;
}

@property (nonatomic, readonly) FCNetworkReachability *networkReachability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithNetworkReachability:(id)arg1;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
- (id)errorMessageForTitle:(id)arg1 subtitle:(id)arg2;
- (id)errorMessageForArticleView;

@end
