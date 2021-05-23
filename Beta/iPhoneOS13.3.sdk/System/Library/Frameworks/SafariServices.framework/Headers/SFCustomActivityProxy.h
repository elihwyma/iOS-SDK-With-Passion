/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SFCustomActivityProxy : NSObject

{
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    unsigned long long _activityProxyID;
}

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) unsigned long long activityProxyID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActivity:(id)arg1;
- (id)activityTypeWithActivity:(id)arg1;
- (id)_initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 proxyID:(unsigned long long)arg4;

@end
