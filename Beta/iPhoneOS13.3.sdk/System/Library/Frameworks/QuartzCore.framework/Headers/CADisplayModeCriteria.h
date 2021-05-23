/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CADisplayModeCriteria : NSObject

{
    struct CADisplayModeCriteriaPriv *_priv;
}

@property struct CGSize resolution;
@property double refreshRate;
@property (copy) NSString *hdrMode;

- (id)init;
- (void)dealloc;

@end
