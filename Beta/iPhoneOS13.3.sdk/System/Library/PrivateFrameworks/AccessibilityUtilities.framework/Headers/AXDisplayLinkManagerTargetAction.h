/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXDisplayLinkManagerTargetAction : NSObject

{
    id _target;
    SEL _actionSelector;
    unsigned long long _displayDidRefreshCount;
}

@property (retain, nonatomic) id target;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) unsigned long long displayDidRefreshCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (void)displayDidRefresh:(id)arg1;

@end
