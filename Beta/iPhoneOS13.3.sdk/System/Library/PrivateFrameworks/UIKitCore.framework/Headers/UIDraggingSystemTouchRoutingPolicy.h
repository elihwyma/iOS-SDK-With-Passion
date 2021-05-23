/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <Swift>

{
    _Bool _hitTestingDisabled;
    NSArray *_contextIDsToAlwaysSendTouches;
    NSArray *_contextIDsToExcludeFromHitTesting;
}

@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=isHitTestingDisabled) _Bool hitTestingDisabled;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
