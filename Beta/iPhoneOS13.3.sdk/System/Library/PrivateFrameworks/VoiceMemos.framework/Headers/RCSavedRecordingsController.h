/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <CoreData/NSFetchedResultsController.h>

@class NSArray, NSFetchRequest, NSPredicate, NSString;

@protocol NSFetchedResultsControllerDelegate;

@interface RCSavedRecordingsController : NSFetchedResultsController

{
    NSFetchRequest *_fetchRequest;
    NSPredicate *_fetchPredicate;
    NSString *_searchString;
    id <NSFetchedResultsControllerDelegate> _defaultDelegate;
}

@property (copy, nonatomic) NSString *searchString;
@property (nonatomic, readonly) NSArray *fetchedRecordings;

- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (void)setDefaultDelegate:(id)arg1;

@end
