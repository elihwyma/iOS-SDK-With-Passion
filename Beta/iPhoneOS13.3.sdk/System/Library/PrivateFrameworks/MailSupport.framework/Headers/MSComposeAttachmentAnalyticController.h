/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject

{
    long long _totalDrawingsInsertedCount;
    MSDiagnosticManager *_diagnosticManager;
}

@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager;

- (void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(_Bool)arg2;
- (id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2;
- (void)sendMessageWithActualDrawingInsertCount:(long long)arg1;
- (void)abandonMessageWithActualDrawingInsertCount:(long long)arg1;

@end
