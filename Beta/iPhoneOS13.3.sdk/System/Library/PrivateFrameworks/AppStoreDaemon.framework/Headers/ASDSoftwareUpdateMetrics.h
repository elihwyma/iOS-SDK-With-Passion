/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDate;

@interface ASDSoftwareUpdateMetrics : NSObject <Swift>

{
    _Bool _usingModernUpdatesCheck;
    NSDate *_lastUpdateCheck;
    NSDate *_nextUpdateCheck;
}

@property (copy, nonatomic) NSDate *lastUpdateCheck;
@property (copy, nonatomic) NSDate *nextUpdateCheck;
@property (nonatomic) _Bool usingModernUpdatesCheck;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
