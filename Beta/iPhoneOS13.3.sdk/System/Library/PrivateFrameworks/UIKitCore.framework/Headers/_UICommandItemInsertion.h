/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICommandChange.h>

@class NSArray, _UICommandIdentifier;

__attribute__((visibility("hidden")))
@interface _UICommandItemInsertion : _UICommandChange

{
    NSArray *_fallbacks;
    NSArray *_insertsBefore;
    NSArray *_insertsAfter;
}

@property (nonatomic, readonly) _UICommandIdentifier *anchor;
@property (nonatomic, readonly) NSArray *fallbacks;
@property (nonatomic, readonly) NSArray *insertsBefore;
@property (nonatomic, readonly) NSArray *insertsAfter;

+ (_Bool)supportsSecureCoding;
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;

@end
