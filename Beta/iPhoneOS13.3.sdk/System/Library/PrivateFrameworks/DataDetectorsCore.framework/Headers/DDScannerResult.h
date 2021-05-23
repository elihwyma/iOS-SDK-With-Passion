/*
 Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface DDScannerResult : NSObject

{
    struct __DDResult *_coreResult;
    NSArray *_subResultsCache;
    NSURL *_cachedURL;
    _Bool _hasCachedURL;
}

@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) NSString *matchedString;
@property (nonatomic, readonly) struct _NSRange urlificationRange;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int category;
@property (nonatomic, readonly) NSURL *url;
@property struct _NSRange range;

+ (_Bool)supportsSecureCoding;
+ (id)resultFromCoreResult:(struct __DDResult *)arg1;
+ (id)resultsFromCoreResults:(struct __CFArray *)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)score;
- (id)location;
- (id)rawValue;
- (struct __DDResult *)coreResult;
- (id)subResults;
- (void)offsetRangeBy:(long long)arg1;
- (id)initWithCoreResult:(struct __DDResult *)arg1;
- (CDStruct_912cb5d2)cfRange;
- (_Bool)typeIs:(struct __CFString *)arg1;
- (id)contextualData;
- (void)setSubResults:(id)arg1;
- (double)getDuration;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id *)arg3 allDayRef:(_Bool *)arg4;
- (_Bool)extractStartDate:(id *)arg1 startTimezone:(id *)arg2 endDate:(id *)arg3 endTimezone:(id *)arg4 allDayRef:(_Bool *)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (_Bool)getPhoneValue:(id *)arg1 label:(id *)arg2;
- (_Bool)getMailValue:(id *)arg1 label:(id *)arg2;
- (_Bool)getIMScreenNameValue:(id *)arg1 type:(id *)arg2;
- (_Bool)getStreet:(id *)arg1 city:(id *)arg2 state:(id *)arg3 zip:(id *)arg4 country:(id *)arg5;

@end
