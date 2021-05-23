/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSOperation.h>

@class NSString;

@interface NSOperation (FCOperationIdentifyingSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)shortOperationDescription;
- (id)longOperationDescription;

@end
