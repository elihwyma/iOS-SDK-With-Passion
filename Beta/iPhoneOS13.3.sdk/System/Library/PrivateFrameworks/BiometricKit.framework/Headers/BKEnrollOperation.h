/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKOperation.h>

@class NSData;

@protocol BKEnrollOperationDelegate;

@interface BKEnrollOperation : BKOperation

{
    unsigned int _userID;
    NSData *_credentialSet;
}

@property (weak, nonatomic) id <BKEnrollOperationDelegate> delegate;
@property (nonatomic) unsigned int userID;
@property (copy, nonatomic) NSData *credentialSet;

- (id)initWithDevice:(id)arg1;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)startBioOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (id)optionsDictionaryWithError:(id *)arg1;

@end
