/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NSStackLayoutRule : NSObject

{
    NSArray *_stackedRects;
    double _spacing;
    long long _orientation;
}

@property (copy, readonly) NSArray *stackedRects;
@property (readonly) double spacing;
@property (readonly) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *ruleDescription;

+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3;
+ (id)horizontalStackWithRects:(id)arg1 spacing:(double)arg2;
+ (id)verticalStackWithRects:(id)arg1 spacing:(double)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeChildRules;
- (id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 spacing:(double)arg3;

@end
