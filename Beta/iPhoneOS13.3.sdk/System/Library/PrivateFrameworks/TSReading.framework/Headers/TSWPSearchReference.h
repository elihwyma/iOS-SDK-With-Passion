/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TSWPSelection, TSWPSmartField, TSWPStorage;

@protocol TSKAnnotation;

@interface TSWPSearchReference : NSObject

{
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    struct _NSRange _smartFieldRange;
    _Bool _refersToSmartField;
    TSWPSmartField *_smartField;
    _Bool _autohideHighlight;
    _Bool _pulseHighlight;
    NSArray *_findHighlights;
    id <TSKAnnotation> annotation;
    struct CGPoint searchReferencePoint;
}

@property (retain, nonatomic) TSWPSelection *selection;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) _Bool refersToSmartField;
@property (nonatomic) struct _NSRange smartFieldRange;
@property (retain, nonatomic) TSWPSmartField *smartField;
@property (nonatomic, readonly) _Bool isInsertionPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) _Bool pulseHighlight;
@property (nonatomic) _Bool autohideHighlight;
@property (retain, nonatomic) id <TSKAnnotation> annotation;

+ (id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2;
+ (id)searchReferenceWithStorage:(id)arg1 range:(struct _NSRange)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)storage;
- (long long)compare:(id)arg1;
- (id)model;
- (_Bool)isSelectable;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (id)searchReferenceStart;
- (id)searchReferenceEnd;
- (_Bool)isReplaceable;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (void)pUpdateSelection;

@end
