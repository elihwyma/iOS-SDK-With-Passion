/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKTransportProviding;

@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject

{
    id <CRKTransportProviding> mBaseTransportProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransportProvider:(id)arg1;

@end
