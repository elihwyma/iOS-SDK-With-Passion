/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKPlayHistoryRemoveRequest : WLKRequest

{
    NSString *_channelID;
    NSString *_bundleID;
    NSString *_externalID;
}

@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *externalID;

- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBundleID:(id)arg1 externalID:(id)arg2;

@end
