/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject

{
    AVDisplayCriteriaInternal *_displayCriteria;
}

@property (nonatomic, readonly) float refreshRate;
@property (readonly) int videoDynamicRange;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2;

@end
