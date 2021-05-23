/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation

{
    NSString *_deleteID;
}

@property (copy, nonatomic, readonly) NSString *deleteID;

- (id)initWithDeleteID:(id)arg1 caller:(id)arg2 isContinueWatching:(_Bool)arg3;

@end
