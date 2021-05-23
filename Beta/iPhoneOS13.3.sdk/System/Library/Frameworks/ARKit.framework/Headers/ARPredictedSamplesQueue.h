/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ARPredictedSamplesQueue : NSObject

{
    int _capacity;
    NSMutableArray *_allSamples;
}

@property (retain, nonatomic) NSMutableArray *allSamples;
@property (nonatomic) int capacity;

- (id)init;
- (id)description;
- (id)samples;
- (void)add:(id)arg1;

@end
