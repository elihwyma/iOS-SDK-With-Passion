/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKContentPlayRequest : WLKRequest

{
    NSString *_canonicalID;
}

@property (copy, nonatomic, readonly) NSString *canonicalID;

- (id)initWithCanonicalID:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
