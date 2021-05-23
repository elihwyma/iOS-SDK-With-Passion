/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@interface ASTTestAutomation : NSObject

{
    _Bool _testAutomationEnabled;
}

@property (nonatomic) _Bool testAutomationEnabled;

+ (id)sharedInstance;
+ (void)postServerResponse:(id)arg1;
+ (void)postServerRequest:(id)arg1;

- (id)init;

@end
