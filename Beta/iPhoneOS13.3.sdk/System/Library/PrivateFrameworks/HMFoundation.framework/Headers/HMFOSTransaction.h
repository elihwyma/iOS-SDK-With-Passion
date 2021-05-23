/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSObject;

@protocol OS_os_transaction;

@interface HMFOSTransaction

{
    NSObject<OS_os_transaction> *_transaction;
    double _creationTime;
}

@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, readonly) double creationTime;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
