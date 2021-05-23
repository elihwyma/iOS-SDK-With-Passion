/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKAPSMachServiceConnectionKey : NSObject

{
    NSString *_environmentName;
    NSString *_namedDelegatePort;
}

@property (copy, nonatomic) NSString *environmentName;
@property (copy, nonatomic) NSString *namedDelegatePort;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;

@end
