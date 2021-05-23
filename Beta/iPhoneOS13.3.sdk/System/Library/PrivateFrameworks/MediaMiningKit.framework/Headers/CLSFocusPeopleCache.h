/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSSet, PHPhotoLibrary;

@interface CLSFocusPeopleCache : NSObject

{
    NSSet *_peopleUUIDs;
    unsigned long long _maximumNumberOfPeople;
    PHPhotoLibrary *_photoLibrary;
}

@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long maximumNumberOfPeople;
@property (nonatomic, readonly) NSSet *peopleUUIDs;

+ (id)_personSortDescriptors;

- (void)invalidate;
- (id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2;
- (id)_collectValidPeopleUUIDs;

@end
