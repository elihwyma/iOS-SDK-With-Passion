/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadTrackers : NSObject

{
    BRCAccountSession *_session;
    NSMutableDictionary *_trackersByDocID;
    NSMapTable *_docIDsByTracker;
}

- (id)initWithSession:(id)arg1;
- (void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2;
- (void)removeDownloadTracker:(id)arg1;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (unsigned long long)spaceRequiredForTrackers;
- (_Bool)hasPendingTrackerForDocumentID:(id)arg1;

@end
