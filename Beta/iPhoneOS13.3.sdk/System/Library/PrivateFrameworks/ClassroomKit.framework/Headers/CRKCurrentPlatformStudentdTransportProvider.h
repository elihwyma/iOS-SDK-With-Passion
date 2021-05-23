/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKTransportProviding;

@interface CRKCurrentPlatformStudentdTransportProvider : NSObject

{
    id <CRKTransportProviding> mBaseProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)makeProviderForCurrentPlatform;

@end
