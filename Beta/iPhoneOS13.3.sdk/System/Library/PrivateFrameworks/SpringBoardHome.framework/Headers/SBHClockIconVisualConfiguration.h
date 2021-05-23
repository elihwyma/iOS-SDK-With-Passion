/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBHClockIconVisualConfiguration : NSObject

{
    double _secondHandTailLength;
    double _hourMinuteHandCenterRadius;
    double _secondHandCenterRadius;
    struct CGSize _hourHandSize;
    struct CGSize _minuteHandSize;
    struct CGSize _secondHandSize;
}

@property (nonatomic) struct CGSize hourHandSize;
@property (nonatomic) struct CGSize minuteHandSize;
@property (nonatomic) struct CGSize secondHandSize;
@property (nonatomic) double secondHandTailLength;
@property (nonatomic) double hourMinuteHandCenterRadius;
@property (nonatomic) double secondHandCenterRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
