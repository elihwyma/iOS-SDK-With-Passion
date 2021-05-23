/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface AFImagePNGData : NSObject

{
    NSData *_imageData;
    double _scale;
}

@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) double scale;

@end
