/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface PXFeedbackStore : NSObject

{
    NSMutableDictionary *_store;
}

@property (nonatomic, readonly) NSDictionary *store;

- (id)init;
- (id)_storePath;
- (id)longDescription;
- (void)addFeedbackEntry:(id)arg1;
- (void)removeFeedbackEntry:(id)arg1;
- (unsigned long long)sentFeedbackCount;
- (unsigned long long)unsentFeedbackCount;
- (void)_cleanupStore;
- (_Bool)_saveStore;
- (_Bool)_loadStore;

@end
