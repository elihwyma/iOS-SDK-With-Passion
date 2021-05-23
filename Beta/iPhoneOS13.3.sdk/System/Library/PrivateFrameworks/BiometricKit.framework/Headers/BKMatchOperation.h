/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKOperation.h>

@class NSData, NSNumber;

@protocol BKMatchOperationDelegate;

@interface BKMatchOperation : BKOperation

{
    _Bool _stopOnSuccess;
    _Bool _captureOnly;
    long long _purpose;
    NSNumber *_userID;
    long long _priority;
    NSData *_credentialSet;
    long long _useCase;
}

@property (weak, nonatomic) id <BKMatchOperationDelegate> delegate;
@property (nonatomic) long long purpose;
@property (retain, nonatomic) NSNumber *userID;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSData *credentialSet;
@property (nonatomic) long long useCase;
@property (nonatomic) _Bool stopOnSuccess;
@property (nonatomic) _Bool captureOnly;

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)startBioOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (id)optionsDictionaryWithError:(id *)arg1;
- (id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2;

@end
