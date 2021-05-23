/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, MNDirectionsRequestManager;

__attribute__((visibility("hidden")))
@interface MNNavigationClientProxy : NSObject

{
    GEOApplicationAuditToken *_auditToken;
    MNDirectionsRequestManager *_directionsRequestManager;
}

- (id)init;
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;
- (id)_directionsRequestManager;

@end
