/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, REMList;

@interface REMListAppearanceContext : NSObject

{
    REMList *_list;
}

@property (retain, nonatomic) REMList *list;
@property (nonatomic, readonly) NSString *badgeEmblem;

- (id)initWithList:(id)arg1;
- (_Bool)showingLargeAttachments;

@end
