/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSNumber, NSSet, NSString;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation

{
    NSString *_bundleID;
    NSNumber *_adamID;
    long long _platform;
    NSSet *_versions;
    NSSet *_shortVersions;
}

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSSet *versions;
@property (retain, nonatomic) NSSet *shortVersions;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
