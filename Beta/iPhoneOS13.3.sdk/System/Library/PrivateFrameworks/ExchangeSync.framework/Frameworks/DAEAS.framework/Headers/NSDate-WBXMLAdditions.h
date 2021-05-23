/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSDate.h>

@interface NSDate (WBXMLAdditions)

+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;
+ (id)dateWithActiveSyncString:(id)arg1;
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)arg1;
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)arg1;

- (id)activeSyncString;
- (id)activeSyncStringWithoutSeparators;
- (id)activeSyncStringForYearMonthDay;
- (id)gmtDateToDateInTimeZone:(id)arg1;
- (id)tzDateToDateInGMT:(id)arg1;
- (id)gmtMidnight;
- (id)nearestMidnight;
- (_Bool)isGMTMidnight;

@end
