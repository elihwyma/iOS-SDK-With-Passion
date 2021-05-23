/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryImageInfo : NSObject

{
    unsigned long long _width;
    unsigned long long _height;
    NSString *_format;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSString *format;

@end
