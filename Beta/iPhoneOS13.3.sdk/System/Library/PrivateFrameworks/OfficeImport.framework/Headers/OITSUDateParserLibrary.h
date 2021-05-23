/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParserLibrary : NSObject

{
    OITSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)arg1;
- (void)prepareDateParserInBackground;

@end
