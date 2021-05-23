/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <Foundation/NSObject.h>

@class NSString, SPUISearchViewController;

@interface SPUIPPTTypingHelper : NSObject

{
    double _timeSinceLastFire;
    SPUISearchViewController *_searchViewController;
    NSString *_queryString;
    NSString *_currentQueryString;
    CDUnknownBlockType _completion;
}

@property double timeSinceLastFire;
@property (retain) SPUISearchViewController *searchViewController;
@property (retain) NSString *queryString;
@property (retain) NSString *currentQueryString;
@property (copy) CDUnknownBlockType completion;

- (void)fire:(id)arg1;
- (id)initWithString:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
