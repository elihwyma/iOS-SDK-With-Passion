/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : NSObject <Swift>

{
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    _Bool mTextWrapped;
    _Bool mHorizontalAlignOverridden;
    _Bool mVerticalAlignOverridden;
    _Bool mIndentOverridden;
    _Bool mTextWrappedOveridden;
    _Bool mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)alignmentInfo;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg1;
- (int)horizontalAlignment;
- (void)setHorizontalAlignment:(int)arg1;
- (int)indent;
- (void)setIndent:(int)arg1;
- (_Bool)isVerticalAlignOverridden;
- (_Bool)isHorizontalAlignOverridden;
- (_Bool)isTextWrapped;
- (int)textRotation;
- (_Bool)isTextWrappedOverridden;
- (_Bool)isIndentOverridden;
- (void)setTextWrapped:(_Bool)arg1;
- (void)setTextRotation:(int)arg1;
- (_Bool)isEqualToAlignmentInfo:(id)arg1;
- (void)setDoNotModify:(_Bool)arg1;

@end
