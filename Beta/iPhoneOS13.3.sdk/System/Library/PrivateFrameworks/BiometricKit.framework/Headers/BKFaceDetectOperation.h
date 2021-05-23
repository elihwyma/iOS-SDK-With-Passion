/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <BiometricKit/BKPresenceDetectOperation.h>

@protocol BKFaceDetectOperationDelegate;

@interface BKFaceDetectOperation : BKPresenceDetectOperation

{
    _Bool _highPriority;
    long long _mode;
    double _timeout;
}

@property (nonatomic) long long mode;
@property (nonatomic) double timeout;
@property (nonatomic) _Bool highPriority;
@property (weak, nonatomic) id <BKFaceDetectOperationDelegate> delegate;

- (id)initWithDevice:(id)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)startBioOperation:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;

@end
