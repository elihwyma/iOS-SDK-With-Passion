/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CHMigrationPolicy : NSEntityMigrationPolicy

{
    NSMutableDictionary *mccToISOCountryCodeMap;
    NSString *lastQueriedISOCountryCode;
    NSString *currentLocale;
}

- (id)init;
- (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
- (id)isoCountryCodeForMCC:(id)arg1;
- (id)isoCountryCodeIfAbsent:(id)arg1;

@end
