/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@protocol UIFocusItem;

@protocol CPSPreferredFocusManaging

@property (weak, nonatomic) id <UIFocusItem> preferredFocusItem;
@property (nonatomic) _Bool usePreferredItemOnNextUpdate;

@end
