/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection, NSString;

@interface EMSearchableIndex : NSObject

{
    EMRemoteConnection *_connection;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;

- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (id)initWithRemoteConnection:(id)arg1;

@end
