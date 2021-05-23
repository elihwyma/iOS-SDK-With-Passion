/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSString;

@protocol CVABackgroundRequest, CVALightRequest, CVAPostProcessingRequest;

@interface CVAPortraitGenericRequestImpl : NSObject

{
    _Bool _isTmpConfig;
    id <CVABackgroundRequest> _background;
    id <CVALightRequest> _light;
    id <CVAPostProcessingRequest> _post;
}

@property (retain) id <CVABackgroundRequest> background;
@property (retain) id <CVALightRequest> light;
@property (retain) id <CVAPostProcessingRequest> post;
@property _Bool isTmpConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
