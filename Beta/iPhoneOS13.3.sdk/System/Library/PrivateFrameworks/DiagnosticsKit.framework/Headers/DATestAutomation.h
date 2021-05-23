/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@interface DATestAutomation : NSObject

{
    _Bool _testAutomationEnabled;
}

@property (nonatomic) _Bool testAutomationEnabled;

+ (id)sharedInstance;
+ (void)postConfiguration:(id)arg1;
+ (void)postInteractiveTestEvent:(id)arg1 info:(id)arg2;

- (id)init;

@end
