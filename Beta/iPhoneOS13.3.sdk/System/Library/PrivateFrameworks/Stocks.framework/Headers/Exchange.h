/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface Exchange : NSObject

{
    NSString *_name;
    NSDate *_lastCloseDate;
    NSDate *_nextOpenDate;
    long long _status;
    double _streamInterval;
    double _lastUpdateTime;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastCloseDate;
@property (retain, nonatomic) NSDate *nextOpenDate;
@property (nonatomic) long long status;
@property (nonatomic) double streamInterval;
@property (nonatomic, readonly) double lastUpdateTime;

+ (id)formattedExchangeNameForName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)archiveDictionary;
- (void)updateWithDictionary:(id)arg1;
- (_Bool)marketIsOpen;
- (void)_updateWithDictionary:(id)arg1 newUpdate:(_Bool)arg2;
- (_Bool)marketIsAfterHours;

@end
