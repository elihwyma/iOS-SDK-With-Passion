/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection, NSString;

@interface MSDiagnosticManager : NSObject

{
    AWDServerConnection *_awdServerConnection;
}

@property (nonatomic, readonly) AWDServerConnection *awdServerConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void)submitComposeAttachmentReport:(id)arg1;
- (_Bool)submitWithIdentifier:(unsigned int)arg1 metricGenerator:(CDUnknownBlockType)arg2;
- (void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4;
- (void)submitMessageLoadingReport:(id)arg1;
- (void)submitFetchMetricsReport:(id)arg1;

@end
