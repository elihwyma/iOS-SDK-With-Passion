/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInputClue.h>

@class CLSPerson, PHPhotoLibrary;

@interface CLSInputPeopleClue : CLSInputClue

{
    CLSPerson *_person;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _numberOfFaces;
}

@property (retain, nonatomic) CLSPerson *person;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long numberOfFaces;

+ (id)clueWithPeople:(id)arg1;
+ (id)cluesWithPeoples:(id)arg1;
+ (id)clueWithPeopleUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)cluesWithPeopleUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;

- (id)description;
- (id)name;
- (_Bool)isEqualToClue:(id)arg1;
- (void)_prepareWithProgressBlock:(CDUnknownBlockType)arg1;

@end
