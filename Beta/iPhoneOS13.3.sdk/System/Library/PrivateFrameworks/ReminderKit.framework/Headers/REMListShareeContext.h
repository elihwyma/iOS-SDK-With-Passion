/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, REMList, REMSharee;

@interface REMListShareeContext : NSObject

{
    REMSharee *_sharedOwner;
    REMList *_list;
}

@property (retain, nonatomic) REMList *list;
@property (nonatomic, readonly) NSArray *sharees;
@property (nonatomic, readonly) REMSharee *sharedOwner;

- (id)initWithList:(id)arg1;
- (id)shareesExcludingOwner;

@end
