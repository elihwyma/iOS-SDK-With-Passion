/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIFavoritesRequestManager : NSObject

{
    NSMutableDictionary *_ongoingEntityIDOperationDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *ongoingEntityIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)sendRequestForEntityID:(id)arg1 teamName:(id)arg2 action:(unsigned long long)arg3;

@end
