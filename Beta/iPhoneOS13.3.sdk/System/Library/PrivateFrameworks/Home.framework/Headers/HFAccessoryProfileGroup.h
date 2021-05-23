/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface HFAccessoryProfileGroup : NSObject

{
    NSArray *_profiles;
    NSNumber *_groupIdentifier;
}

@property (copy, nonatomic, readonly) NSArray *profiles;
@property (copy, nonatomic, readonly) NSNumber *groupIdentifier;

+ (id)groupProfiles:(id)arg1 options:(id)arg2;
+ (id)_groupProfilesKeyedByIdentifier:(id)arg1 options:(id)arg2;
+ (id)_groupIdentifierForProfile:(id)arg1 options:(id)arg2;
+ (id)_hashCombiningHashes:(id)arg1;

- (id)initWithProfiles:(id)arg1 groupIdentifier:(id)arg2;

@end
