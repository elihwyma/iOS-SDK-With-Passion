/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLHighlightItemPromoterRule;

@interface PLHighlightItemPromoter : NSObject

{
    id <PLHighlightItemPromoterRule> _rule;
}

@property (nonatomic, readonly) id <PLHighlightItemPromoterRule> rule;

- (id)initWithRule:(id)arg1;
- (void)processHighlightItemsInHighlightItemList:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
