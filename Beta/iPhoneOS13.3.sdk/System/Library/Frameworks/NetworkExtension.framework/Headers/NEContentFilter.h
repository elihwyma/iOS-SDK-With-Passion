/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject

{
    _Bool _enabled;
    NEFilterProviderConfiguration *_provider;
    long long _grade;
}

@property (getter=isEnabled) _Bool enabled;
@property (copy) NEFilterProviderConfiguration *provider;
@property (nonatomic) long long grade;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
