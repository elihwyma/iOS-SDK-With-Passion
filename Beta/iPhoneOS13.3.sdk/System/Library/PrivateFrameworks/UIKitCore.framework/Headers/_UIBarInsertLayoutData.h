/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBarInsertLayoutData : NSObject <Swift>

{
    _Bool _collapsible;
    _Bool _prefersExpanded;
    _Bool _ignoredForCollapsingBehaviors;
    _Bool _active;
    NSString *_identifier;
    double _minimumHeight;
    double _preferredHeight;
    double _assignedHeight;
    double _collapsingHeight;
    long long _priority;
    long long _order;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double preferredHeight;
@property (nonatomic, getter=isCollapsible) _Bool collapsible;
@property (nonatomic) _Bool prefersExpanded;
@property (nonatomic, readonly) double layoutMinimumHeight;
@property (nonatomic, readonly, getter=isVariableHeight) _Bool variableHeight;
@property (nonatomic, readonly) double assignedHeight;
@property (nonatomic, readonly) double collapsingHeight;
@property (nonatomic) long long priority;
@property (nonatomic) long long order;
@property (nonatomic) _Bool ignoredForCollapsingBehaviors;
@property (nonatomic) _Bool active;

+ (void)updateLayoutParameters:(id)arg1 overflowLayout:(id)arg2 forAvailableHeight:(double)arg3;
+ (id)calculateRestingHeightsForLayouts:(id)arg1;
+ (CDStruct_39925896)calculateLayoutHeights:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFixedHeight:(double)arg1;

@end
