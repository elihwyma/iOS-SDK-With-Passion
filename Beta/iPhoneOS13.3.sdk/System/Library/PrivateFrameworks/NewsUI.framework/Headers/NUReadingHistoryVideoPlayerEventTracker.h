/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString;

@protocol NUVideoReadingHistory;

@interface NUReadingHistoryVideoPlayerEventTracker : NSObject <Swift>

{
    id <NUVideoReadingHistory> _readingHistory;
}

@property (nonatomic, readonly) id <NUVideoReadingHistory> readingHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithReadingHistory:(id)arg1;

@end
