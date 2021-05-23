/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject

{
    NSMutableArray *_entries;
}

+ (id)_serializableDictionaryForEntry:(id)arg1;
+ (id)_entityDescriptionForContext:(long long)arg1;
+ (id)_logTypeForContext:(long long)arg1;
+ (_Bool)_isManagedObjectPointerForContext:(long long)arg1;

- (id)init;
- (id)stringWithFormat:(long long)arg1;
- (void)clear;
- (void)addLogWithContext:(long long)arg1 timestamp:(double)arg2 pointer:(unsigned long long)arg3;
- (id)_formattedStringForPrinting;
- (id)_JSONStringPretty:(_Bool)arg1;
- (id)_plistString;

@end
