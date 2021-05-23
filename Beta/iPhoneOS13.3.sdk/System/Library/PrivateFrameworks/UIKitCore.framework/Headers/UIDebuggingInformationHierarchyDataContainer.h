/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyDataContainer : NSObject

{
    _Bool _collapsed;
    UIView *_view;
    long long _level;
}

@property (weak, nonatomic) UIView *view;
@property (nonatomic) long long level;
@property (nonatomic) _Bool collapsed;

- (id)initWithView:(id)arg1 atLevel:(long long)arg2;

@end
