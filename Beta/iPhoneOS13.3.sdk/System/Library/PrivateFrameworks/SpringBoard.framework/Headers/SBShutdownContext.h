/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBShutdownContext : NSObject <Swift>

{
    NSString *_reason;
    _Bool _fromUserPowerDown;
}

@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic) _Bool fromUserPowerDown;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReason:(id)arg1;

@end
