/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTCallForwardingValue : NSObject

{
    _Bool _enabled;
    int _reason;
    int _clss;
    NSString *_saveNumber;
    NSNumber *_noReplyTime;
}

@property (nonatomic) int reason;
@property (nonatomic) int clss;
@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSString *saveNumber;
@property (retain, nonatomic) NSNumber *noReplyTime;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
