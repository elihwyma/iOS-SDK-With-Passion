/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject

{
    NSDate *_date;
}

@property (retain) NSDate *date;

+ (id)sharedManager;
+ (id)nowDate;
+ (_Bool)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2;
+ (_Bool)prekeyShouldBeRolled:(id)arg1;
+ (_Bool)prekeyCanBeDeleted:(id)arg1;
+ (id)oldestDateAllowedToSendTo;
+ (double)timeIntervalAllowedForAction:(unsigned long long)arg1;
+ (id)debugDescriptionForAction:(unsigned long long)arg1;
+ (void)setNowDate:(id)arg1;

@end
