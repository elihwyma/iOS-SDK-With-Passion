/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject

{
    AXMAudioDataSource *_inputSource;
}

@property (weak, nonatomic) AXMAudioDataSource *inputSource;

- (void)processSamples:(unsigned long long)arg1;

@end
