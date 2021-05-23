/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <Swift>

{
    NSString *mString;
    double mWidth;
    double mHeight;
    TSWPParagraphStyle *mParagraphStyle;
    _Bool mCellWraps;
    int mValueType;
    struct UIEdgeInsets mPaddingInsets;
    unsigned int mVerticalAlignment;
    int mWritingDirection;
}

@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) TSWPParagraphStyle *paragraphStyle;
@property (nonatomic, readonly) _Bool cellWraps;
@property (nonatomic, readonly) int valueType;
@property (nonatomic, readonly) struct UIEdgeInsets paddingInsets;
@property (nonatomic, readonly) unsigned int verticalAlignment;
@property (nonatomic, readonly) int writingDirection;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(_Bool)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets)arg7 verticalAlignment:(unsigned int)arg8 writingDirection:(int)arg9;
- (_Bool)isEqualToLayoutContentCachedKey:(id)arg1;

@end
