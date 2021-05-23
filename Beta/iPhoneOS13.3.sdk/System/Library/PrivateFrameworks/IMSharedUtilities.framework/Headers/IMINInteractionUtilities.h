/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject

{
    CSSearchableIndex *_searchableIndex;
}

@property (retain, nonatomic) CSSearchableIndex *searchableIndex;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)deleteInteractionsWithChatGUIDs:(id)arg1;
- (void)deleteInteractionsWithMessageGUIDs:(id)arg1;

@end
