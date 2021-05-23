/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UITextRange;

@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface UITextDragRequest : NSObject

{
    _Bool _selected;
    UITextRange *_dragRange;
    NSArray *_existingItems;
    id <UIDragSession> _dragSession;
    NSArray *_suggestedItems;
}

@property (retain, nonatomic) NSArray *suggestedItems;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITextRange *dragRange;
@property (nonatomic, readonly) NSArray *existingItems;
@property (nonatomic, readonly) id <UIDragSession> dragSession;

- (id)initWithRange:(id)arg1 inSession:(id)arg2;

@end
