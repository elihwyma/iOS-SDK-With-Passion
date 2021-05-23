/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSTimeZone.h>

@interface ASTimeZone : NSTimeZone

{
    int _gmtOffset;
    int _dstOffset;
    struct _SYSTEMTIME *_standardDate;
    struct _SYSTEMTIME *_daylightDate;
    NSTimeZone *_wrappedTimeZone;
}

+ (void)_cacheTimeZoneInfo;
+ (_Bool)expectsContent;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)gmt;
+ (_Bool)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 withTimeZone:(id)arg3;
+ (id)_tzCachePathCreateIfMissing:(_Bool)arg1;
+ (id)_curTZDataVersion;
+ (_Bool)_loadDataFromDisk;
+ (void)_fillOutCurrentTimeZoneInfo;

- (void)dealloc;
- (id)description;
- (id)name;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (id)data;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)initWithName:(id)arg1;
- (int)parsingState;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)arg1 firstTransitionDate:(struct _SYSTEMTIME *)arg2 secondTransitionDate:(struct _SYSTEMTIME *)arg3;
- (id)dateForRule:(struct _SYSTEMTIME *)arg1 inYear:(long long)arg2;
- (_Bool)_dateIsValidTransitionDate:(id)arg1 inYear:(long long)arg2 outDaylightBias:(long long *)arg3;
- (struct _SYSTEMTIME)_ruleForDate:(id)arg1;
- (id)initWithTZNameFromCalDB:(id)arg1;
- (CDStruct_7681c444 *)mallocTZIForDate:(id)arg1;
- (id)initWithCodingDict:(id)arg1;
- (id)dictForCoding;

@end
