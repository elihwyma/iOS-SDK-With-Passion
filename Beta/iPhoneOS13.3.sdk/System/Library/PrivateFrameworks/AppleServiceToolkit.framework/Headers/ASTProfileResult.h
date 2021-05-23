/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class ASTIdentity, NSArray;

@interface ASTProfileResult : ASTSealablePayload

{
    NSArray *_properties;
    NSArray *_tests;
    ASTIdentity *_identity;
}

@property (nonatomic, readonly) ASTIdentity *identity;
@property (retain, nonatomic) NSArray *properties;
@property (retain, nonatomic) NSArray *tests;

+ (id)resultWithIdentity:(id)arg1;
+ (id)sealedProfileResultWithPayload:(id)arg1 signature:(id)arg2;

- (id)init;
- (id)initWithIdentity:(id)arg1;
- (id)generatePayload;

@end
