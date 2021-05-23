/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingLookupParticipantsOperation : _BRCFrameworkOperation

{
    NSArray *_userIdentities;
    NSMutableArray *_shareParticipants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithUserIdentities:(id)arg1 session:(id)arg2;

@end
