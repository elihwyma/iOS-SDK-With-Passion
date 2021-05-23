/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface CRKAlwaysFailingTransportProvider : NSObject

{
    NSError *mError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithError:(id)arg1;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;

@end
