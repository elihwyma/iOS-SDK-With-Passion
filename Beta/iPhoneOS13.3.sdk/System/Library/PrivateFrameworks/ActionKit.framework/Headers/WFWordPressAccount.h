/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount

{
    NSURL *_endpointURL;
}

@property (copy, nonatomic) NSURL *endpointURL;

+ (unsigned long long)modelVersion;
+ (id)localizedServiceName;
+ (id)serviceID;
+ (_Bool)allowsMultipleAccounts;
+ (id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3;

- (_Bool)isValid;
- (id)localizedName;
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3;

@end
