/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface VUIUpNextRequestManager : NSObject

{
    NSMutableDictionary *_ongoingCanonicalIDOperationDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *ongoingCanonicalIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)sendRequestForCanonicalID:(id)arg1 action:(unsigned long long)arg2;

@end
