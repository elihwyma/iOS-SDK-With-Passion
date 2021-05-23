/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <CoreData/NSFetchedResultsController.h>

@class NSDictionary;

@interface NSFetchedResultsController (RCAdditions)

@property (copy, nonatomic, readonly) NSDictionary *rc_sectionsByName;

@end
