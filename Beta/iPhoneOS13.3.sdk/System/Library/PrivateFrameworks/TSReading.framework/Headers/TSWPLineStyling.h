/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class TSSPropertyMap;

@interface TSWPLineStyling : NSObject <Swift>

{
    long long _lineCount;
    unsigned long long _options;
    TSSPropertyMap *_additionalCharacterStylePropertyMap;
    TSSPropertyMap *_overrideCharacterStylePropertyMap;
}

@property (nonatomic, readonly) long long lineCount;
@property (nonatomic, readonly) unsigned long long options;
@property (retain, nonatomic, readonly) TSSPropertyMap *additionalCharacterStylePropertyMap;
@property (retain, nonatomic, readonly) TSSPropertyMap *overrideCharacterStylePropertyMap;

+ (id)lineStylingWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4;
- (id)_optionsDescription;

@end
