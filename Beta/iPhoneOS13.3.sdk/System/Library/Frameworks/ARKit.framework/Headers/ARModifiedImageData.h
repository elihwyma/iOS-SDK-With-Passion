/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageData.h>

@class NSDictionary;

@interface ARModifiedImageData : ARImageData

{
    ARImageData *_originalImage;
    NSDictionary *_metaData;
}

@property (nonatomic, readonly) ARImageData *originalImage;
@property (copy, nonatomic) NSDictionary *metaData;

- (id)initWithImageData:(id)arg1;

@end
