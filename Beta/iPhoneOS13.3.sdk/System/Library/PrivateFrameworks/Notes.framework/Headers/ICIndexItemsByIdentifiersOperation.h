/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation

{
    NSArray *_objectIDURIsToIndex;
}

@property (copy, nonatomic) NSArray *objectIDURIsToIndex;

- (void)main;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 objectIDURIsToIndex:(id)arg3;

@end
