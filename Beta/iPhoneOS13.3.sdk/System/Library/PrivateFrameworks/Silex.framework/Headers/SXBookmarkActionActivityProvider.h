/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXBookmarkManager;

@interface SXBookmarkActionActivityProvider : NSObject

{
    id <SXBookmarkManager> _bookmarkManager;
}

@property (nonatomic, readonly) id <SXBookmarkManager> bookmarkManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityGroupForAction:(id)arg1;
- (id)initWithBookmarkManager:(id)arg1;

@end
