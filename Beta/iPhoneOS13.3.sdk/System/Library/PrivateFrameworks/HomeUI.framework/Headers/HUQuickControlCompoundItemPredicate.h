/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HUQuickControlCompoundItemPredicate : NSObject

{
    NSArray *_requiredSubpredicates;
    NSArray *_optionalSubpredicates;
    unsigned long long _minimumNumberOfMatchedPredicates;
}

@property (copy, nonatomic, readonly) NSArray *requiredSubpredicates;
@property (copy, nonatomic, readonly) NSArray *optionalSubpredicates;
@property (nonatomic, readonly) unsigned long long minimumNumberOfMatchedPredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMatches;

- (id)init;
- (id)matchingControlItemsForControlItems:(id)arg1;
- (id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2;
- (id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2 minimumNumberOfMatchedPredicates:(unsigned long long)arg3;
- (id)allSubpredicates;

@end
