/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class IPAAdjustmentVersionInfo, NSArray;

@interface IPAAdjustmentStack : NSObject

{
    IPAAdjustmentVersionInfo *_versionInfo;
    NSArray *_adjustments;
}

@property (copy, nonatomic) IPAAdjustmentVersionInfo *versionInfo;
@property (copy, nonatomic) NSArray *adjustments;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)minimumVersionForFormat:(id)arg1;
- (id)_debugDescriptionSuffix;
- (_Bool)isEqualToAdjustmentStack:(id)arg1;

@end
