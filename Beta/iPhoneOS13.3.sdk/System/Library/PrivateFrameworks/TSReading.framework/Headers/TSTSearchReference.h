/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TSTTableInfo;

@protocol TSKAnnotation;

@interface TSTSearchReference : NSObject

{
    TSTTableInfo *_tableInfo;
    CDStruct_0441cfb5 _cellID;
    struct _NSRange _range;
    _Bool _autohideHighlight;
    _Bool _pulseHighlight;
    NSArray *_findHighlights;
    id <TSKAnnotation> annotation;
    struct CGPoint searchReferencePoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGPoint searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) _Bool pulseHighlight;
@property (nonatomic) _Bool autohideHighlight;
@property (retain, nonatomic) id <TSKAnnotation> annotation;

+ (id)searchReferenceWithTableInfo:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 range:(struct _NSRange)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct _NSRange)range;
- (id)model;
- (void)setRange:(struct _NSRange)arg1;
- (id)selection;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (id)searchReferenceStart;
- (id)searchReferenceEnd;
- (_Bool)isReplaceable;
- (id)tableInfo;
- (CDStruct_0441cfb5)cellID;
- (id)initWithTableInfo:(id)arg1 cellID:(CDStruct_0441cfb5)arg2 range:(struct _NSRange)arg3;
- (void)setCellID:(CDStruct_0441cfb5)arg1;

@end
