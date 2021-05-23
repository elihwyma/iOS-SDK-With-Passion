/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface SSAppWakeRequest : NSObject

{
    NSString *_appIdentifier;
    NSDictionary *_launchOptions;
    NSString *_processAssertionIdentifier;
    double _processAssertionInterval;
    NSString *_processAssertionReason;
    _Bool _shouldLaunchApp;
}

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSDictionary *launchOptions;
@property (nonatomic) _Bool shouldLaunchApp;
@property (copy, nonatomic) NSString *processAssertionIdentifier;
@property (nonatomic) double processAssertionInterval;
@property (copy, nonatomic) NSString *processAssertionReason;

+ (id)familyContentRemovalRequestWithAppIdentifier:(id)arg1 accountPairs:(id)arg2;
+ (id)newsstandFinishRequestWithAppIdentifier:(id)arg1 issueIdentifiers:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
