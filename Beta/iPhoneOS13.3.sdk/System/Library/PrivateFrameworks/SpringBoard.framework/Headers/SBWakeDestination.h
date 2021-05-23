/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBSRemoteAlertDefinition;

@interface SBWakeDestination : NSObject

{
    unsigned long long _type;
    NSString *_identifier;
    SBSRemoteAlertDefinition *_remoteAlertDefinition;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SBSRemoteAlertDefinition *remoteAlertDefinition;

@end
