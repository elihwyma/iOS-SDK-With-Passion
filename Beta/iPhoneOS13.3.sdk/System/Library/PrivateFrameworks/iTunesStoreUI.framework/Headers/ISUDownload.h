/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, NSURL, SSDownload;

@protocol OS_dispatch_queue;

@interface ISUDownload : NSObject

{
    SSDownload *_download;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) SSDownload *managedDownload;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly, getter=isContentRestricted) _Bool contentRestricted;
@property (nonatomic, readonly) NSString *phaseIdentifier;
@property (nonatomic, readonly) NSNumber *storeItemIdentifier;
@property (nonatomic, readonly) NSNumber *storePreorderIdentifier;
@property (nonatomic, readonly) NSURL *thumbnailImageURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long bytesDownloaded;
@property (nonatomic, readonly) long long bytesTotal;
@property (nonatomic, readonly) double estimatedSecondsRemaining;
@property (nonatomic, readonly, getter=isPurchase) _Bool purchase;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *statusDescription;
@property (nonatomic, readonly, getter=isPausable) _Bool pausable;

+ (void)initialize;
+ (id)downloadProperties;
+ (id)downloadExternalProperties;

- (void)dealloc;
- (id)initWithManagedDownload:(id)arg1;
- (id)copyLocalizedStatusString;
- (void)resetPreorderState;

@end
