/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXLayoutOptions;

@interface SXLayoutParameters : NSObject

{
    SXLayoutOptions *_layoutOptions;
    unsigned long long _layoutType;
    double _expectedDuration;
}

@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) unsigned long long layoutType;
@property (nonatomic, readonly) double expectedDuration;

- (id)description;
- (id)initWithLayoutOptions:(id)arg1 layoutType:(unsigned long long)arg2 expectedDuration:(double)arg3;

@end
