/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CMNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface WMListLevelTextToken : NSObject

{
    NSString *_string;
    int _level;
    CMNumberFormatter *_formatter;
}

@property (readonly) NSString *string;
@property (readonly) int level;

+ (id)tokenWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;

- (id)stringForIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;

@end
