/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection;

@interface EMFetchController : NSObject

{
    EMRemoteConnection *_connection;
}

@property (retain) EMRemoteConnection *connection;

+ (id)remoteInterface;

- (id)diagnosticInformation;
- (id)initWithRemoteConnection:(id)arg1;
- (void)performFetchOfType:(int)arg1;
- (void)setCurrentSuppressionContexts:(id)arg1 suppressedContexts:(id)arg2;
- (void)performFetchOfType:(int)arg1 mailboxes:(id)arg2;
- (void)performFetchOfType:(int)arg1 accounts:(id)arg2;

@end
