/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Email/EMContentRepresentation.h>

@class NSString;

@interface EMContentRepresentation (EDMessagePersistence)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)requestRepresentationForItemWithObjectID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)requestUpdatedRepresentationWithCompletion:(CDUnknownBlockType)arg1;

@end
