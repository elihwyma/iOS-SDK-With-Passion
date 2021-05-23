/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaEvent.h>

@interface SXMediaExposureEvent : SXMediaEvent

{
    unsigned long long _numberOfImagesExposed;
    unsigned long long _numberOfImages;
}

@property (nonatomic) unsigned long long numberOfImagesExposed;
@property (nonatomic) unsigned long long numberOfImages;

@end
