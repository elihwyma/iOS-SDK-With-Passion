//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface SUInstallPolicy : NSObject <NSSecureCoding>
{
    NSUInteger _skipsAllowed;
    NSUInteger _type;
    BOOL _autoUpdateEnabled;
    BOOL _useDarkBoot;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL useDarkBoot; // @synthesize useDarkBoot=_useDarkBoot;
@property(readonly, nonatomic) BOOL autoUpdateEnabled; // @synthesize autoUpdateEnabled=_autoUpdateEnabled;
@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) NSUInteger skipsAllowed; // @synthesize skipsAllowed=_skipsAllowed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_setDarkBoolEnabled:(BOOL)arg1;
- (void)_setAutoUpdateEnabled:(BOOL)arg1;
- (void)_setType:(NSUInteger)arg1;
- (id)initWithInstallPolicyType:(NSUInteger)arg1;
- (id)init;

@end

