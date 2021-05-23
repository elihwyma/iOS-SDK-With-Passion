/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterNewFlowVerdict.h>

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict

{
    _Bool _updateRules;
    _Bool _handledByDataProvider;
}

@property _Bool updateRules;
@property _Bool handledByDataProvider;

+ (_Bool)supportsSecureCoding;
+ (id)updateRules;
+ (id)allowVerdictWithUpdateRules:(_Bool)arg1;
+ (id)dropVerdictWithUpdateRules:(_Bool)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
