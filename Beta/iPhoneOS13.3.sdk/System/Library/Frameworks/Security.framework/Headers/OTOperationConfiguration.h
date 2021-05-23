/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@interface OTOperationConfiguration : NSObject

{
    _Bool _discretionaryNetwork;
    _Bool _useCachedAccountStatus;
    unsigned long long _timeoutWaitForCKAccount;
    long long _qualityOfService;
}

@property (nonatomic) unsigned long long timeoutWaitForCKAccount;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) _Bool discretionaryNetwork;
@property (nonatomic) _Bool useCachedAccountStatus;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
