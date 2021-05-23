/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBRebootContext : NSObject <Swift>

{
    NSString *_reason;
    _Bool _isDark;
    _Bool _fromOTASoftwareUpdate;
}

@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, getter=isDark) _Bool dark;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReason:(id)arg1;

@end
