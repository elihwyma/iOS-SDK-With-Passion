/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NWAppAdvice : NSObject

{
    NSString *_bundleIdentifier;
    long long _state;
    NSString *_reason;
}

@property (retain) NSString *bundleIdentifier;
@property long long state;
@property (retain) NSString *reason;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
