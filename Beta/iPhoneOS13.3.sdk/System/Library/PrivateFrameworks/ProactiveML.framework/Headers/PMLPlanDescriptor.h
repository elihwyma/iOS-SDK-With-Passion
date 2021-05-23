/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMLPlanDescriptor : NSObject

{
    NSString *_name;
    NSString *_version;
    NSString *_locale;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *locale;

+ (_Bool)isValidPlanId:(struct NSString *)arg1;
+ (id)descriptorFromPlanId:(struct NSString *)arg1;
+ (struct NSString *)planIdFromString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;

@end
