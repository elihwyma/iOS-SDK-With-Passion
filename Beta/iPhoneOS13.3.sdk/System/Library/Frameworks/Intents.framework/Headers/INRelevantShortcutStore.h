/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject

{
    CSSearchableIndex *_index;
}

@property (nonatomic, readonly) CSSearchableIndex *index;

+ (id)defaultStore;

- (id)initWithSearchableIndex:(id)arg1;
- (void)setRelevantShortcuts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
