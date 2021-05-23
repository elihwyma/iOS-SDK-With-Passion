/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ICTableAttachmentSelection : NSObject

{
    _Bool _moving;
    _Bool _draggingText;
    unsigned long long _type;
    NSArray *_columns;
    NSArray *_rows;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *rows;
@property (nonatomic, readonly) _Bool isRangeOrSpanningSelection;
@property (nonatomic) _Bool moving;
@property (nonatomic) _Bool draggingText;
@property (nonatomic, readonly) _Bool valid;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unselect;
- (void)selectCellAtColumn:(id)arg1 row:(id)arg2;
- (_Bool)removeColumns:(id)arg1 rows:(id)arg2 previousColumns:(id)arg3 previousRows:(id)arg4;
- (void)selectColumns:(id)arg1;
- (void)selectRows:(id)arg1;
- (void)selectCellRangeAtColumns:(id)arg1 rows:(id)arg2;
- (void)setSelectionEqualTo:(id)arg1;
- (_Bool)removeColumns:(id)arg1 rows:(id)arg2;

@end
