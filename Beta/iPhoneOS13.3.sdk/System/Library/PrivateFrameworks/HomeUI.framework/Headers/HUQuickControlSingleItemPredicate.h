/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMatches;

+ (id)predicateWithControlItemClass:(Class)arg1;

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)matchesControlItem:(id)arg1;
- (id)matchingControlItemsForControlItems:(id)arg1;

@end
