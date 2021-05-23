/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemGroupItem.h>

#import <Home/Swift-Protocol.h>

@class NSNumber, NSSet, NSString;

@protocol HFCharacteristicValueSource;

@interface HFAccessoryProfileGroupItem : HFItemGroupItem <Swift>

{
    NSSet *_profiles;
    NSNumber *_groupIdentifier;
    id <HFCharacteristicValueSource> _valueSource;
}

@property (nonatomic, readonly) NSSet *profiles;
@property (copy, nonatomic, readonly) NSNumber *groupIdentifier;
@property (nonatomic, readonly) id <HFCharacteristicValueSource> valueSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *services;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)accessories;
- (id)copyWithValueSource:(id)arg1;
- (id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2 valueSource:(id)arg3;
- (id)_buildProfileItems;

@end
