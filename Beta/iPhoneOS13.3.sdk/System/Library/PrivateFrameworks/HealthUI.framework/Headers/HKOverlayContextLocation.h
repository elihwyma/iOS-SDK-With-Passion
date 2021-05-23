/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface HKOverlayContextLocation : NSObject

{
    long long _sectionIndex;
    long long _contextItemIndex;
}

@property (nonatomic, readonly) long long sectionIndex;
@property (nonatomic, readonly) long long contextItemIndex;

- (_Bool)isEqual:(id)arg1;
- (id)initWithSectionIndex:(long long)arg1 contextItemIndex:(long long)arg2;

@end
