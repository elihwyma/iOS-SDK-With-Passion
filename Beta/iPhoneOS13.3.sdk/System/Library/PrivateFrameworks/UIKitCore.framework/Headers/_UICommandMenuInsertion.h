/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICommandChange.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICommandMenuInsertion : _UICommandChange

{
    NSArray *_fallbacks;
    NSArray *_insertsAtStart;
    NSArray *_insertsAtEnd;
    NSArray *_insertsBefore;
    NSArray *_insertsAfter;
}

@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSArray *fallbacks;
@property (nonatomic, readonly) NSArray *insertsAtStart;
@property (nonatomic, readonly) NSArray *insertsAtEnd;
@property (nonatomic, readonly) NSArray *insertsBefore;
@property (nonatomic, readonly) NSArray *insertsAfter;

+ (_Bool)supportsSecureCoding;
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;

@end
