/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSString;

@interface IPAPhotoAdjustmentPipeline : NSObject

{
    NSString *_platform;
    unsigned long long _version;
}

@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) unsigned long long version;

+ (void)initialize;
+ (id)current;
+ (id)pipelineForPlatform:(id)arg1 version:(unsigned long long)arg2;
+ (id)pipelineForVersion:(unsigned long long)arg1;
+ (id)pipelineFromString:(id)arg1;

- (id)string;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)initWithPlatform:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)isEqualToAdjustmentPipeline:(id)arg1;

@end
