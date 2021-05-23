/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@interface PLProcessExitAggregator : NSObject

{
    unsigned char _exitReasonNamespace;
    unsigned int _labelIdx;
    unsigned int _lastTTR;
    unsigned long long _exitReasonCode;
}

@property unsigned int labelIdx;
@property unsigned int lastTTR;
@property unsigned char exitReasonNamespace;
@property unsigned long long exitReasonCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
