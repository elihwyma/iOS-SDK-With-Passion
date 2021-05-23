/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFMailMessageLibrarySetThreadSendersRecipientsConflictResolutionUpgradeStep : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)runWithConnection:(id)arg1;
+ (id)threadSendersTableSchema;
+ (id)threadRecipientsTableSchema;
+ (id)_schemaWithThreadsTable:(id)arg1;

@end
