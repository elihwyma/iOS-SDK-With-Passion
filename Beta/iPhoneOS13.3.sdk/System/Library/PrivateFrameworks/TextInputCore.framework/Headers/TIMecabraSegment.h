/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIMecabraSegment : NSObject

{
    NSString *_reading;
    NSString *_surface;
}

@property (retain, nonatomic) NSString *reading;
@property (retain, nonatomic) NSString *surface;

+ (void)splitSegmests:(id)arg1 at:(int)arg2 forPrefix:(id *)arg3 forSuffix:(id *)arg4;

@end
