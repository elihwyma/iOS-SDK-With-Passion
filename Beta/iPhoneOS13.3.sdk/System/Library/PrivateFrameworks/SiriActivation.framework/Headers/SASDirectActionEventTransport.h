/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SASDirectActionEventTransport : NSObject

{
    NSNumber *_event;
}

@property (retain, nonatomic) NSNumber *event;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)directActionEvent;
- (id)initWithAFDirectActionEvent:(long long)arg1;

@end
