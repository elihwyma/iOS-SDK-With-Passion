/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface HFAlbumIconDescriptor : NSObject

{
    _Bool _shouldForceLTR;
    NSData *_imageData;
}

@property (nonatomic, readonly) NSData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool shouldForceLTR;

- (_Bool)isEqual:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;

@end
