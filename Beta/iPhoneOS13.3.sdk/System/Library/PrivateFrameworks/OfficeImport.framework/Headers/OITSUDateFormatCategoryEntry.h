/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategoryEntry : NSObject

{
    unsigned short _separator;
    NSMutableArray *_formatters;
    NSMutableSet *_formatStrings;
}

- (unsigned short)separator;
- (id)formatStrings;
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(id *)arg3 perfect:(_Bool *)arg4;
- (id)initWithSeparator:(unsigned short)arg1;
- (void)addFormat:(id)arg1 locale:(id)arg2;

@end
