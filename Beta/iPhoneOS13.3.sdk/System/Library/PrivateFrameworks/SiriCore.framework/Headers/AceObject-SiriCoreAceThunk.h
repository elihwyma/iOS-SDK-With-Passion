/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SAObjects/AceObject.h>

@class NSString;

@interface AceObject (SiriCoreAceThunk)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)siriCore_invokeThunk;

@end
