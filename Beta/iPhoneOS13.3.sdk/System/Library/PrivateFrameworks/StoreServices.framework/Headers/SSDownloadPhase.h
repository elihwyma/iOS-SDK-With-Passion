/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSOperationProgress;

@interface SSDownloadPhase : NSObject

{
    SSOperationProgress *_operationProgress;
}

@property (readonly) SSOperationProgress *operationProgress;
@property (readonly) long long phaseType;
@property (readonly) long long progressValue;
@property (readonly) long long totalProgressValue;
@property (readonly) long long progressUnits;
@property (readonly) double estimatedSecondsRemaining;
@property (readonly) float progressChangeRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithOperationProgress:(id)arg1;

@end
