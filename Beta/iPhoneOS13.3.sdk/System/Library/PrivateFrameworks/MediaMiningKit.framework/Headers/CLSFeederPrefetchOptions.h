/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@interface CLSFeederPrefetchOptions : NSObject

{
    unsigned long long _personCountPrefetchMode;
    unsigned long long _personsPrefetchMode;
    unsigned long long _scenesPrefetchMode;
    unsigned long long _faceInformationPrefetchMode;
    unsigned long long _locationPrefetchMode;
}

@property (nonatomic) unsigned long long personCountPrefetchMode;
@property (nonatomic) unsigned long long personsPrefetchMode;
@property (nonatomic) unsigned long long scenesPrefetchMode;
@property (nonatomic) unsigned long long faceInformationPrefetchMode;
@property (nonatomic) unsigned long long locationPrefetchMode;

+ (id)feederPrefetchOptionsWithDefaultMode:(unsigned long long)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
