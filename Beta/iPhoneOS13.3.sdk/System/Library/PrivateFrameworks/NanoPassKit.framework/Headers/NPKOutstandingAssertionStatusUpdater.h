/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <NanoPassKit/NPKProvisioningServiceAgentStatusUpdater.h>

@class NSUUID;

@interface NPKOutstandingAssertionStatusUpdater : NPKProvisioningServiceAgentStatusUpdater

{
    int _assertType;
    NSUUID *_assertionUUID;
}

@property (retain, nonatomic) NSUUID *assertionUUID;
@property (nonatomic) int assertType;

@end
