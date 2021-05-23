/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload

{
    unsigned long long _airPrintCount;
    NSMutableArray *_ippAddresses;
}

@property (retain, nonatomic) NSMutableArray *ippAddresses;
@property (nonatomic) unsigned long long airPrintCount;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;

@end
