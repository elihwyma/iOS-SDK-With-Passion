/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDUbiquitousConversationManager, NSString;

@protocol EDConversationDailyCloudExporterDelegate;

@interface EDConversationDailyiCloudExporter : NSObject

{
    id <EDConversationDailyCloudExporterDelegate> _delegate;
    EDUbiquitousConversationManager *_conversationManager;
}

@property (nonatomic, readonly) id <EDConversationDailyCloudExporterDelegate> delegate;
@property (nonatomic, readonly) EDUbiquitousConversationManager *conversationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)run;
- (id)initWithDelegate:(id)arg1 conversationManager:(id)arg2;

@end
