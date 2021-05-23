/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSDate, TSUColor, TSWPChangeSession, TSWPStorage;

@interface TSWPChange : TSPObject <Swift>

{
    TSWPStorage *_parentStorage;
    int _kind;
    TSWPChangeSession *_session;
    NSDate *_date;
    _Bool _hidden;
}

@property (nonatomic) TSWPStorage *parentStorage;
@property (retain, nonatomic) TSWPChangeSession *session;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) _Bool isInsertion;
@property (nonatomic, readonly) _Bool isDeletion;
@property (nonatomic, readonly) _Bool showsMarkup;
@property (nonatomic, readonly) _Bool showsHiddenDeletionMarkup;
@property (nonatomic, readonly) TSUColor *textMarkupColor;
@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;

- (void)dealloc;
- (id)copyWithContext:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (_Bool)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (void)trackedTextDidChange;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1;
- (_Bool)isFromChangeSession:(id)arg1;

@end
