/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVVisiblePercentageProvider : NSObject

{
    double _visiblePercentage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double visiblePercentage;

- (double)visiblePercentageOfObject:(id)arg1;
- (id)initWithVisiblePercentage:(double)arg1;

@end
