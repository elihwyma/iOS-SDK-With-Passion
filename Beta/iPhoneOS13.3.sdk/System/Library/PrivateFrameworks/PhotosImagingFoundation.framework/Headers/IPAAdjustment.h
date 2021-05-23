/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class IPAAdjustmentVersion, NSDictionary, NSString;

@interface IPAAdjustment : NSObject

{
    NSString *_identifier;
    IPAAdjustmentVersion *_version;
    NSDictionary *_settings;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IPAAdjustmentVersion *version;
@property (retain, nonatomic) NSDictionary *settings;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_debugDescriptionSuffix;
- (_Bool)isEqualToAdjustment:(id)arg1;

@end
