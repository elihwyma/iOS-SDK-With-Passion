/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HMActionSet, HMHome, NSString;

@protocol HFHomeKitObject, HFServiceLikeItem;

@interface HFActionSetSuggestionItem : HFItem <Swift>

{
    _Bool _includeExistingActionSets;
    _Bool _persistAddedSuggestions;
    _Bool _hasEverHadValidSuggestion;
    HMHome *_home;
    HMActionSet *_actionSet;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
}

@property (nonatomic) _Bool hasEverHadValidSuggestion;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMActionSet *actionSet;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) _Bool includeExistingActionSets;
@property (nonatomic) _Bool persistAddedSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;

@end
