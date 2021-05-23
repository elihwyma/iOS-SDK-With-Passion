/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject

{
    id <TUCallHistoryManagerDataSource> _dataSource;
}

@property (nonatomic, readonly) id <TUCallHistoryManagerDataSource> dataSource;

- (id)init;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;

@end
