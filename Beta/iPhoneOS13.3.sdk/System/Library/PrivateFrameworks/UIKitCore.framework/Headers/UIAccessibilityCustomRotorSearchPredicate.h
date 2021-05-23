/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIAccessibilityCustomRotorItemResult;

@interface UIAccessibilityCustomRotorSearchPredicate : NSObject

{
    UIAccessibilityCustomRotorItemResult *_currentItem;
    long long _searchDirection;
}

@property (retain, nonatomic) UIAccessibilityCustomRotorItemResult *currentItem;
@property (nonatomic) long long searchDirection;

@end
