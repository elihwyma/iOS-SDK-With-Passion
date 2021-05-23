/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBHardwareButtonGestureParameters : NSObject <Swift>

{
    long long _maximumPressCount;
    double _longPressTimeInterval;
    double _multiplePressTimeInterval;
}

@property (nonatomic, readonly) long long maximumPressCount;
@property (nonatomic, readonly) double longPressTimeInterval;
@property (nonatomic, readonly) double multiplePressTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
