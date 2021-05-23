/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSOperation.h>

@class NSString;

@interface UIActivityItemProvider : NSOperation

{
    id _placeholderItem;
    NSString *_activityType;
    id _providedItem;
}

@property (retain, nonatomic) id placeholderItem;
@property (retain, nonatomic) id providedItem;
@property (copy, nonatomic, setter=_setActivityType:) NSString *activityType;
@property (nonatomic, readonly) id item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)main;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)initWithPlaceholderItem:(id)arg1;
- (_Bool)_shouldExecuteItemOperationForActivity:(id)arg1;

@end
