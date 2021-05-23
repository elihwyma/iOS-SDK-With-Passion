/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class SiriContextOverride;

@interface SiriContext : NSObject

{
    SiriContextOverride *_contextOverride;
}

@property (retain, nonatomic) SiriContextOverride *contextOverride;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextOverride:(id)arg1;

@end
