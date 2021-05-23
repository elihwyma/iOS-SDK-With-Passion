/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface ARReferenceImageCachedError : NSObject

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

@end
