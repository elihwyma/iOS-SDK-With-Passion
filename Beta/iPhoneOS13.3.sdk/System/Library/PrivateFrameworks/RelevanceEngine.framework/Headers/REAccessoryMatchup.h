/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, REImage;

@interface REAccessoryMatchup : NSObject

{
    REImage *_homeTeamImage;
    NSString *_homeTeamName;
    NSString *_homeTeamDetail;
    REImage *_awayTeamImage;
    NSString *_awayTeamName;
    NSString *_awayTeamDetail;
    NSString *_matchupProgress;
    unsigned long long _status;
    NSDate *_matchupStartDate;
    NSDate *_matchupDateFetched;
}

@property (nonatomic, readonly) REImage *homeTeamImage;
@property (nonatomic, readonly) NSString *homeTeamName;
@property (nonatomic, readonly) NSString *homeTeamDetail;
@property (nonatomic, readonly) REImage *awayTeamImage;
@property (nonatomic, readonly) NSString *awayTeamName;
@property (nonatomic, readonly) NSString *awayTeamDetail;
@property (nonatomic, readonly) NSString *matchupProgress;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSDate *matchupStartDate;
@property (nonatomic, readonly) NSDate *matchupDateFetched;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeTeamImage:(id)arg1 homeTeamName:(id)arg2 homeTeamDetail:(id)arg3 awayTeamImage:(id)arg4 awayTeamName:(id)arg5 awayTeamDetail:(id)arg6 progress:(id)arg7 startDate:(id)arg8 status:(unsigned long long)arg9 dateFetched:(id)arg10;

@end
