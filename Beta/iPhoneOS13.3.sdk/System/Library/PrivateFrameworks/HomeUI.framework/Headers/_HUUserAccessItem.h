/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class HMUser;

@interface _HUUserAccessItem : HFItem

{
    HMUser *_user;
    CDUnknownBlockType _resultsBlock;
}

@property (nonatomic, readonly) HMUser *user;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultsBlock;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUser:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;

@end
