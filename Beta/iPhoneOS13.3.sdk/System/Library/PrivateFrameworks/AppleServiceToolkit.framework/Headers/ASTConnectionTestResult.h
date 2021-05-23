/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTMaterializedConnection.h>

@class NSNumber, NSString;

@interface ASTConnectionTestResult : ASTMaterializedConnection

{
    NSNumber *_testId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *testId;

- (id)endpoint;
- (id)initWithTestResults:(id)arg1;

@end
