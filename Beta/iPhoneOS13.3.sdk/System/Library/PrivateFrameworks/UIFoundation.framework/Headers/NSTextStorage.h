/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSMutableAttributedString.h>

@class NSArray, NSMutableArray;

@protocol NSTextStorageController, NSTextStorageDelegate;

@interface NSTextStorage : NSMutableAttributedString

{
    struct _NSRange _editedRange;
    long long _editedDelta;
    struct {
        unsigned int editedMask:8;
        unsigned int postWillProcess:1;
        unsigned int postDidProcess:1;
        unsigned int :6;
        unsigned int disabled:16;
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
    id <NSTextStorageController> _textStorageController;
}

@property (copy, nonatomic, readonly) NSArray *layoutManagers;
@property (nonatomic, readonly) unsigned long long editedMask;
@property (nonatomic, readonly) struct _NSRange editedRange;
@property (nonatomic, readonly) long long changeInLength;
@property (weak, nonatomic) id <NSTextStorageDelegate> delegate;
@property (nonatomic, readonly) _Bool fixesAttributesLazily;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)beginEditing;
- (void)endEditing;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (id)cuiCatalog;
- (_Bool)_usesSimpleTextEffects;
- (_Bool)_isEditing;
- (_Bool)_lockForReading;
- (void)_unlock;
- (void)_setForceFixAttributes:(_Bool)arg1;
- (void)_setUsesSimpleTextEffects:(_Bool)arg1;
- (id)cuiStyleEffects;
- (void)addLayoutManager:(id)arg1;
- (void)processEditing;
- (void)removeLayoutManager:(id)arg1;
- (_Bool)_lockForWriting;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (_Bool)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(_Bool)arg1;
- (_Bool)_shouldSetOriginalFontAttribute;
- (void)setTextStorageController:(id)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange)arg1;
- (void)_notifyEdited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(struct _NSRange)arg4;
- (void)fontSetChanged;
- (void)_setEditedRange:(struct _NSRange)arg1;
- (_Bool)_lockForWritingWithExceptionHandler:(_Bool)arg1;
- (id)textStorageController;
- (struct _NSRange)_rangeByEstimatingAttributeFixingForRange:(struct _NSRange)arg1;
- (_Bool)_forceFixAttributes;
- (void)coordinateReading:(CDUnknownBlockType)arg1;
- (void)coordinateEditing:(CDUnknownBlockType)arg1;
- (void)setEditedMask:(unsigned long long)arg1;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange)arg1;

@end
