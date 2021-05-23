/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UICoordinateSpace;

@interface CSRegion : NSObject

{
    _Bool _hidden;
    _Bool _reservedForHorizontalScrolling;
    NSString *_identifier;
    long long _role;
    id <UICoordinateSpace> _coordinateSpace;
    id <UICoordinateSpace> _identity;
    id _provider;
    struct CGRect _extent;
}

@property (weak, nonatomic, readonly) id <UICoordinateSpace> coordinateSpace;
@property (nonatomic, readonly) struct CGRect extent;
@property (nonatomic) long long role;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <UICoordinateSpace> identity;
@property (weak, nonatomic) id provider;
@property (nonatomic, getter=isReservedForHorizontalScrolling) _Bool reservedForHorizontalScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect bounds;

+ (id)regionForCoordinateSpace:(id)arg1;
+ (id)regionForCoordinateSpace:(id)arg1 withExtent:(struct CGRect)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)regionForCoordinateSpace:(id)arg1;
- (id)role:(long long)arg1;
- (_Bool)intersectsCoordinateSpace:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 withExtent:(struct CGRect)arg2 role:(long long)arg3;

@end
