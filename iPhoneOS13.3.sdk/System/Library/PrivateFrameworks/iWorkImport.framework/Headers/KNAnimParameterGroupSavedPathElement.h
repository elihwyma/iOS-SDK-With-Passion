//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface KNAnimParameterGroupSavedPathElement : NSObject <NSSecureCoding>
{
    NSUInteger _elementType;
    CGPoint _toPoint;
    CGPoint _cp1;
    CGPoint _cp2;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) CGPoint cp2; // @synthesize cp2=_cp2;
@property(nonatomic) CGPoint cp1; // @synthesize cp1=_cp1;
@property(nonatomic) CGPoint toPoint; // @synthesize toPoint=_toPoint;
@property(nonatomic) NSUInteger elementType; // @synthesize elementType=_elementType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

