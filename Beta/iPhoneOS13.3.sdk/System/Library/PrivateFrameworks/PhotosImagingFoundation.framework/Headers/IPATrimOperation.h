/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPATrimOperation : IPAVideoOperation

{
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _endTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 startTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 endTime;
@property (nonatomic, readonly) CDStruct_e83c9415 trimRange;

- (id)debugDescription;
- (id)identifier;
- (id)initWithOperation:(id)arg1;
- (id)initWithStartTime:(CDStruct_1b6d18a9)arg1 endTime:(CDStruct_1b6d18a9)arg2;
- (id)settingsDictionary;
- (id)initWithSettingsDictionary:(id)arg1;
- (_Bool)isEqualToOperation:(id)arg1;
- (id)initWithTrimRange:(CDStruct_e83c9415)arg1;
- (id)trimRangeDictionary;

@end
