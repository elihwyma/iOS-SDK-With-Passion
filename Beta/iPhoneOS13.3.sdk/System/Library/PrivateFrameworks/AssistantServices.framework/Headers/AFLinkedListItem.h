/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFLinkedListItem : NSObject

{
    id _object;
    AFLinkedListItem *_previousItem;
    AFLinkedListItem *_nextItem;
}

@property (nonatomic, readonly) id object;
@property (retain, nonatomic) AFLinkedListItem *previousItem;
@property (retain, nonatomic) AFLinkedListItem *nextItem;

- (id)initWithObject:(id)arg1;
- (void)removeFromList;
- (void)insertAfterItem:(id)arg1;
- (void)insertBeforeItem:(id)arg1;

@end
