/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSProtocolCondition.h>

@class NSNumber, NSString;

@interface SSApplicationVersionCondition : SSProtocolCondition

{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersion;
}

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (_Bool)evaluateWithContext:(id)arg1;

@end
