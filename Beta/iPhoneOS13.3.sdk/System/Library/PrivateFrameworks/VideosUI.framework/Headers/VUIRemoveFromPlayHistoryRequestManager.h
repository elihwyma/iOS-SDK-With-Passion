/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIRemoveFromPlayHistoryRequestManager : NSObject

{
    NSMutableDictionary *_ongoingDeleteIDOperationDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)sendRequestForDeleteID:(id)arg1 canonicalID:(id)arg2 isContinueWatching:(_Bool)arg3;

@end
