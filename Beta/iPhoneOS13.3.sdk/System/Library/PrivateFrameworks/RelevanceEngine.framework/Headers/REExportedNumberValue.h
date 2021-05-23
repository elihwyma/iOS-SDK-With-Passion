/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REExportedValue.h>

@class NSNumber;

@interface REExportedNumberValue : REExportedValue

{
    NSNumber *_number;
}

- (unsigned long long)type;
- (id)numberValue;
- (id)initWithNumber:(id)arg1;

@end
