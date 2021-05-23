/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPAPosterFrameOperation : IPAVideoOperation

{
    CDStruct_1b6d18a9 _frameTime;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 frameTime;

- (id)debugDescription;
- (id)identifier;
- (id)initWithOperation:(id)arg1;
- (id)settingsDictionary;
- (id)initWithSettingsDictionary:(id)arg1;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isMigratable;
- (id)initWithFrameTime:(CDStruct_1b6d18a9)arg1;

@end
