/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSData, NSString;

@interface CVAPostProcessingRequestImplColorCube : NSObject

{
    _Bool _isMono;
    NSData *_backgroundColorCube;
    NSData *_foregroundColorCube;
    NSData *_singleColorCube;
}

@property (retain) NSData *backgroundColorCube;
@property (retain) NSData *foregroundColorCube;
@property (retain) NSData *singleColorCube;
@property _Bool isMono;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
