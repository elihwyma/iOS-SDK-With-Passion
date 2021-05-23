/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <ScreenshotServices/SSUIServiceRequest.h>

@class NSString;

@interface SSUIRunPPTServiceRequest : SSUIServiceRequest

{
    NSString *_testName;
}

@property (copy, nonatomic) NSString *testName;

+ (id)entitlement;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
