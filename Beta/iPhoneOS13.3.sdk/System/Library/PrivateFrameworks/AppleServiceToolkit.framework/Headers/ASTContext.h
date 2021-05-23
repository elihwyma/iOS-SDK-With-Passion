/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class ASTControlCommand, ASTIdentity;

@interface ASTContext : NSObject

{
    _Bool _testSuiteRunning;
    ASTIdentity *_identity;
    long long _clientStatus;
    long long _command;
    ASTControlCommand *_controlCommand;
}

@property (nonatomic) long long clientStatus;
@property (nonatomic) long long command;
@property (nonatomic) _Bool testSuiteRunning;
@property (nonatomic, readonly) ASTControlCommand *controlCommand;
@property (copy, nonatomic, readonly) ASTIdentity *identity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentity:(id)arg1;

@end
