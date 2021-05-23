/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/CXCallAction.h>

@class NSString;

@interface CXPlayDTMFCallAction : CXCallAction

{
    NSString *_digits;
    long long _type;
}

@property (copy, nonatomic) NSString *digits;
@property (nonatomic) long long type;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)customDescription;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(long long)arg3;

@end
