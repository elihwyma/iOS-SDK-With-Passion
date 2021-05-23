/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface BYChronicle : NSObject

{
    NSMutableDictionary *_featureEntries;
}

@property (retain, nonatomic) NSMutableDictionary *featureEntries;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2;
- (void)recordFeatureShown:(unsigned long long)arg1;
- (id)entryForFeature:(unsigned long long)arg1;

@end
