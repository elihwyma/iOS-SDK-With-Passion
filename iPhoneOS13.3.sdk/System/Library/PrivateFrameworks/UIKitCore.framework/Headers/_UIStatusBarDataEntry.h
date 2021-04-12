//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _UIStatusBarDataEntry : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _enabled;
}

+ (id)disabledEntry;
+ (id)entry;
+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)description;
- (id)_ui_descriptionBuilder;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (id)init;
- (id)initFromData:(const CDStruct_0942cde0 )arg1 type:(int)arg2;

@end

