/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDReference, EDResources, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDColumnInfo : NSObject <Swift>

{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    int mWidth;
    _Bool mHidden;
    EDReference *mRange;
    unsigned long long mStyleIndex;
    unsigned char mOutlineLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)key;
- (id)range;
- (id)style;
- (void)setStyle:(id)arg1;
- (_Bool)isHidden;
- (double)width;
- (void)setWidth:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setRange:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (unsigned long long)styleIndex;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (int)widthInXlUnits;
- (void)setWidthInXlUnits:(int)arg1;
- (void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2;
- (unsigned char)outlineLevel;
- (void)setOutlineLevel:(unsigned char)arg1;

@end
