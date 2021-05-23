/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSDContentPath : NSObject

{
    NSArray *_contentLocations;
}

@property (copy, nonatomic) NSArray *contentLocations;

+ (id)contentPathWithLocations:(id)arg1;

- (void)dealloc;
- (id)i_contentLocations;
- (id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2;

@end
