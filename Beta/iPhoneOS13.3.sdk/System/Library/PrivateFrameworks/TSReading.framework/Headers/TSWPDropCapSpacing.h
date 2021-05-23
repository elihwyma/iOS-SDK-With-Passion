/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSWPDropCapSpacing : NSObject <Swift>

{
    _Bool _allowSpanParagraphs;
    unsigned long long _lineCount;
    unsigned long long _elevatedLineCount;
    unsigned long long _followingLineCount;
    double _padding;
    unsigned long long _flags;
    double _maxWidthFactor;
}

@property (nonatomic) unsigned long long lineCount;
@property (nonatomic) unsigned long long elevatedLineCount;
@property (nonatomic) unsigned long long followingLineCount;
@property (nonatomic) double padding;
@property (nonatomic) _Bool allowSpanParagraphs;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) double maxWidthFactor;

+ (id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)computedFlagsWithPropertyMap:(id)arg1;

@end
