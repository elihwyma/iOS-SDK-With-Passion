/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SXHorizontalStackLayoutCalculator : NSObject

{
    NSMutableArray *_items;
    NSMutableArray *_flexibleItems;
    NSMutableArray *_sortedItems;
    NSMutableDictionary *_componentsGroupedByMaximumWidth;
    NSMutableDictionary *_componentsGroupedByMinimumWidth;
    NSMutableDictionary *_minimumWidths;
    NSMutableDictionary *_maximumWidths;
    double _combinedMaximumWidth;
    double _combinedMinimumWidth;
}

@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) NSMutableArray *flexibleItems;
@property (nonatomic, readonly) NSMutableArray *sortedItems;
@property (nonatomic, readonly) NSMutableDictionary *componentsGroupedByMaximumWidth;
@property (nonatomic, readonly) NSMutableDictionary *componentsGroupedByMinimumWidth;
@property (nonatomic, readonly) NSMutableDictionary *minimumWidths;
@property (nonatomic, readonly) NSMutableDictionary *maximumWidths;
@property (nonatomic) double combinedMaximumWidth;
@property (nonatomic) double combinedMinimumWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)layoutForComponentWidth:(double)arg1;
- (void)addFlexibleItemWithIdentifier:(id)arg1;
- (void)addItemWithMinimumWidth:(double)arg1 maximumWidth:(double)arg2 identifier:(id)arg3;

@end
