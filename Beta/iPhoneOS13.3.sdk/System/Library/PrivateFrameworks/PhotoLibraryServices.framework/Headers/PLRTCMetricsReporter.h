/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PGManager, RTCReporting, RTCSecureHierarchyToken;

@interface PLRTCMetricsReporter : NSObject

{
    RTCSecureHierarchyToken *_reportingSessionToken;
    RTCReporting *_reportingSession;
    PGManager *_graphManager;
}

@property (retain, nonatomic) PGManager *graphManager;
@property (retain, nonatomic) RTCSecureHierarchyToken *reportingSessionToken;
@property (retain, nonatomic) RTCReporting *reportingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reportMetricsEvents:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
