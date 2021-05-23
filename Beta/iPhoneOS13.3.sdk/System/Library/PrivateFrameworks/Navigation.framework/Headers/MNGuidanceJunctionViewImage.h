/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject

{
    unsigned long long _imageID;
    NSData *_imageData;
}

@property (nonatomic, readonly) unsigned long long imageID;
@property (nonatomic, readonly) NSData *imageData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageID:(unsigned long long)arg1;

@end
