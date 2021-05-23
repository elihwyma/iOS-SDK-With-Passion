/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNDurationRequest : NSObject

{
    NSMutableArray *completions;
    double startTime;
}

@property (retain, nonatomic) NSMutableArray *completions;
@property (nonatomic) double startTime;

- (id)init;

@end
