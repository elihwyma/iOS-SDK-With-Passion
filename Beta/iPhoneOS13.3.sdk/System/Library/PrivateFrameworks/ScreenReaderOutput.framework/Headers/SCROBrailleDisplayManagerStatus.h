/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SCROBrailleDisplayManagerStatus : NSObject

{
    _Bool _currentAnnouncementUnread;
    _Bool _anyUnreadAnnouncements;
    int _virtualAlignment;
    NSData *_aggregatedData;
    long long _masterStatusCellIndex;
}

@property (retain, nonatomic) NSData *aggregatedData;
@property (nonatomic) int virtualAlignment;
@property (nonatomic) long long masterStatusCellIndex;
@property (nonatomic) _Bool currentAnnouncementUnread;
@property (nonatomic) _Bool anyUnreadAnnouncements;

@end
