/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIPBMessage (PETMessageCoding)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (Class)messageClass;

@end
