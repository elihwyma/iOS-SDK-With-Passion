/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARReplayMovieDataWrapper : NSObject

{
    double _timestamp;
    id _data;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) id data;

@end
