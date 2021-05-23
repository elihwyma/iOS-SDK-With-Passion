/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject

{
    NSArray *_stackedRects;
    NSLayoutRect *_containingRect;
    double _spacing;
    long long _orientation;
}

@property (copy, readonly) NSLayoutRect *containingRect;
@property (copy, readonly) NSArray *stackedRects;
@property (readonly) double spacing;
@property (readonly) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *ruleDescription;

+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4;
+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;
+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeChildRules;
- (id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(double)arg4;

@end
