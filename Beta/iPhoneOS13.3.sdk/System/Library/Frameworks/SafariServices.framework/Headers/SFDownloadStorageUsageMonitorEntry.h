/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSProgress, NSString, NSUUID;

@protocol SFDownloadStorageUsageMonitorEntryDelegate;

__attribute__((visibility("hidden")))
@interface SFDownloadStorageUsageMonitorEntry : NSObject

{
    NSUUID *_identifier;
    NSProgress *_progress;
    id _progressSubscriber;
    NSString *_destinationPath;
    NSData *_progressData;
    long long _cachedUsage;
    id <SFDownloadStorageUsageMonitorEntryDelegate> _delegate;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) NSString *destinationPath;
@property (retain, nonatomic) NSData *progressData;
@property (nonatomic) long long cachedUsage;
@property (weak, nonatomic) id <SFDownloadStorageUsageMonitorEntryDelegate> delegate;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithIdentifier:(id)arg1;
- (void)_didLoseProgress:(id)arg1;
- (void)_didGainProgress:(id)arg1;
- (void)_updateProgressSubscriptionWithData:(id)arg1;
- (void)updateWithDictionaryRepresentation:(id)arg1;

@end
