/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategory : NSObject

{
    struct __CFDateFormatter *_initialFormatter;
    NSMutableArray *_entries;
}

- (void)dealloc;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(id *)arg3 perfect:(_Bool *)arg4;
- (id)initWithInitialPattern:(id)arg1 locale:(id)arg2;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(id)arg3;
- (id)entryForSeparator:(unsigned short)arg1;
- (id)initialPattern;
- (id)formatStringsDictionary;

@end
