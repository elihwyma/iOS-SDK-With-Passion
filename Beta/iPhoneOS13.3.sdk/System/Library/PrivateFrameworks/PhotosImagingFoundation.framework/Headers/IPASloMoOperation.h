/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPASloMoOperation : IPAVideoOperation

{
    CDStruct_e83c9415 _timeRange;
    float _rate;
}

@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;

+ (id)operationFromFileURL:(id)arg1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
- (id)internalRepresentation;
- (id)initWithOperation:(id)arg1;
- (id)settingsDictionary;
- (id)initWithSettingsDictionary:(id)arg1;
- (_Bool)isEqualToOperation:(id)arg1;
- (_Bool)isMigratable;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;

@end
