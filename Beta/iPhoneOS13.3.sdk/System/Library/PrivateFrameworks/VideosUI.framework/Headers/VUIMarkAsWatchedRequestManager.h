/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIMarkAsWatchedRequestManager : NSObject

{
    NSMutableDictionary *_ongoingItemIDOperationDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *ongoingItemIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3;

@end
