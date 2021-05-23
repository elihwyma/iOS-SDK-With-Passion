/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableArray, NSString, OITSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormat : NSObject <Swift>

{
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    _Bool _currencyCodeComputed;
    int _formatType;
    OITSUCustomFormatData *_defaultFormatData;
    NSString *_formatName;
    NSMutableArray *_conditionList;
}

@property (nonatomic, readonly) NSMutableArray *conditionList;
@property (nonatomic, readonly) int formatType;
@property (nonatomic, readonly) OITSUCustomFormatData *defaultFormatData;
@property (nonatomic, readonly) unsigned long long conditionCount;
@property (nonatomic, readonly) NSString *formatName;
@property (nonatomic, readonly) NSString *formatNameStem;
@property (nonatomic, readonly) NSString *formatNameTag;
@property (nonatomic, readonly) NSString *currencyCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)conditionalFormatDataForValue:(double)arg1;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (void)p_makeFormatNameStemAndTag;
- (_Bool)p_isEqual:(id)arg1 matchingFullName:(_Bool)arg2;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)customFormatWithNewName:(id)arg1;
- (_Bool)isEqualWithStemNameMatching:(id)arg1;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;

@end
