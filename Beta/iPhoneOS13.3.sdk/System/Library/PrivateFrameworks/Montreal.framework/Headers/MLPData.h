/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class NSData;

@interface MLPData : NSObject

{
    unsigned int _label;
    NSData *_oneHot;
    NSData *_pixels;
    NSData *_classDist;
}

@property unsigned int label;
@property (retain) NSData *oneHot;
@property (retain) NSData *pixels;
@property (retain) NSData *classDist;

@end
