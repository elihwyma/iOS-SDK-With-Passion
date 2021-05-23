/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol CRKTransportProviding;

@interface CRKFailIfSimulatorTransportProvider : NSObject

{
    id <CRKTransportProviding> _baseProvider;
    NSError *_failureError;
}

@property (nonatomic, readonly) id <CRKTransportProviding> baseProvider;
@property (nonatomic, readonly) NSError *failureError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTransportProvider:(id)arg1 failureError:(id)arg2;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransportProvider:(id)arg1;

@end
