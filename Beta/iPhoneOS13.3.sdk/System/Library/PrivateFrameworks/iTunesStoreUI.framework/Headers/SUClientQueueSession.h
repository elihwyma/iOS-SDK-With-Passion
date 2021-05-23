/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject

{
    long long _count;
    NSArray *_downloadKinds;
    SSDownloadManagerOptions *_managerOptions;
    id _queue;
}

@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *downloadKinds;
@property (copy, nonatomic) SSDownloadManagerOptions *managerOptions;
@property (retain, nonatomic) id queue;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
