/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@interface PHAssetCreationMetadataCopyOptions : NSObject <Swift>

{
    _Bool _shouldCopyTitleDescriptionAndKeywords;
    _Bool _shouldCopySpatialOverCaptureResources;
}

@property (nonatomic) _Bool shouldCopyTitleDescriptionAndKeywords;
@property (nonatomic) _Bool shouldCopySpatialOverCaptureResources;

+ (id)metadataCopyOptionsForPublishingOriginals;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1;

@end
