//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>


@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding>
{
    NSNumber *_spacingMultiplier;
}

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;
@property(retain, nonatomic) NSNumber *spacingMultiplier; // @synthesize spacingMultiplier=_spacingMultiplier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

