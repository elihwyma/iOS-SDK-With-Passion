/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBDismissalItem, NSString;

@interface BBDismissalSyncBulletinMatch : NSObject

{
    NSString *_sectionID;
    BBDismissalItem *_dismissalItem;
    NSString *_dismissalID;
    unsigned long long _feeds;
}

@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) BBDismissalItem *dismissalItem;
@property (copy, nonatomic) NSString *dismissalID;
@property (nonatomic) unsigned long long feeds;

- (id)description;
- (id)initWithDismissalID:(id)arg1 andItem:(id)arg2;
- (id)initWithDismissalDictionaryItem:(id)arg1;

@end
