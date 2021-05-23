/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BROperation.h>

@class NSArray;

@interface BRShareLookupParticipantsOperation : BROperation

{
    NSArray *_userIdentities;
    CDUnknownBlockType _lookupParticipantsCompletionBlock;
}

@property (copy) CDUnknownBlockType lookupParticipantsCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithUserIdentities:(id)arg1;

@end
