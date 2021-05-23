/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKPassSyncChange, NSDate;

@interface NPKPassSyncServiceSyncStatus : NSObject

{
    NPKPassSyncChange *_lastKnownOutgoingChange;
    NSDate *_outgoingChangeDate;
    NPKPassSyncChange *_lastKnownIncomingChange;
    NSDate *_incomingChangeDate;
}

@property (retain, nonatomic) NPKPassSyncChange *lastKnownOutgoingChange;
@property (retain, nonatomic) NSDate *outgoingChangeDate;
@property (retain, nonatomic) NPKPassSyncChange *lastKnownIncomingChange;
@property (retain, nonatomic) NSDate *incomingChangeDate;

- (void)reset;
- (_Bool)shouldSyncWithCurrentIncomingChange:(id)arg1 currentOutgoingChange:(id)arg2 currentDate:(id)arg3;

@end
