/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSArray, TSSPropertyMap;

@interface TSWPDropCap : NSObject <Swift>

{
    unsigned long long _charCount;
    TSSPropertyMap *_characterStyleOverridePropertyMap;
    NSArray *_spacings;
}

@property (nonatomic, readonly) unsigned long long charCount;
@property (retain, nonatomic, readonly) TSSPropertyMap *characterStyleOverridePropertyMap;
@property (retain, nonatomic, readonly) NSArray *spacings;

+ (id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacing:(id)arg3;
+ (id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 lineCount:(unsigned long long)arg3;
+ (id)dropCapWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharCount:(unsigned long long)arg1 characterStyleOverridePropertyMap:(id)arg2 spacings:(id)arg3;
- (unsigned long long)computedFlagsForSpacing:(id)arg1;

@end
