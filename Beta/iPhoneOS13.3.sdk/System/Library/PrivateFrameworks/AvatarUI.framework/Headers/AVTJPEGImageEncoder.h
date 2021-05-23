/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSString;

@interface AVTJPEGImageEncoder : NSObject <Swift>

{
    double _compressionQuality;
}

@property (nonatomic, readonly) double compressionQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id *)arg2;
- (id)imageFromURL:(id)arg1 error:(id *)arg2;
- (id)dataFromImage:(id)arg1;
- (id)initWithCompressionQuality:(double)arg1;

@end
