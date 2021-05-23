/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, REMListChangeItem;

@interface REMListAppearanceContextChangeItem : NSObject

{
    REMListChangeItem *_listChangeItem;
}

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (copy, nonatomic) NSString *badgeEmblem;

- (_Bool)showingLargeAttachments;
- (void)setShowingLargeAttachments:(_Bool)arg1;
- (id)initWithListChangeItem:(id)arg1;

@end
