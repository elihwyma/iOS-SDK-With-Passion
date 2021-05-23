/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAbstractReviewViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKReviewLargeUnsyncedConversationsViewController : CKAbstractReviewViewController

{
    NSArray *_conversations;
}

@property (retain, nonatomic) NSArray *conversations;

+ (void)initialize;

- (void)_populateConversationsIfNeeded;
- (id)navigationBarTitle;
- (id)tableViewCellReuseIdentifier;
- (Class)tableViewCellClass;
- (void)reloadModelData;
- (unsigned long long)numberOfModelObjects;
- (id)modelObjectAtIndex:(unsigned long long)arg1;
- (void)deleteModelObjectAndUnderlyingData:(id)arg1;
- (void)didSelectModelObjectAtIndex:(unsigned long long)arg1;

@end
