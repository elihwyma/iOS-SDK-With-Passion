/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCoachingHeuristic : NSObject

{
    _Bool _satisfied;
}

@property (nonatomic) _Bool satisfied;
@property (nonatomic, readonly) long long requirements;

- (void)updateWithFrame:(id)arg1;

@end
