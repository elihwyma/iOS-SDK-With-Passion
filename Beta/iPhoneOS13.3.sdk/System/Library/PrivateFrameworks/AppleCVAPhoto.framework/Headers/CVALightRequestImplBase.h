/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface CVALightRequestImplBase : NSObject

{
    float _portraitStyleStrength;
    NSDictionary *_faceKitProcessOutput;
}

@property (retain) NSDictionary *faceKitProcessOutput;
@property float portraitStyleStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
