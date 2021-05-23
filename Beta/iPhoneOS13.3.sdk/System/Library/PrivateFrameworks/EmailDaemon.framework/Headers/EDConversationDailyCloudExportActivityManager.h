/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EDConversationDailyCloudExportActivityManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (void)scheduleWithConversationExportDelegate:(id)arg1 conversationManager:(id)arg2;

@end
