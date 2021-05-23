/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@protocol CKSearchResultCell <Swift>

@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (unsigned short)reuseIdentifier;

- (unsigned short)configureWithQueryResult:searchText:mode: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshForSearchTextIfNeeded: /* Error: Ran out of types for this method. */;

@end
