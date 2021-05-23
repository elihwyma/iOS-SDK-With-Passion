/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface ATXScoreDict : NSObject

{
    struct __CFDictionary *_dict;
    NSSet *_defaultKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long count;

+ (id)scoreDictFromDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)getKeys:(id *)arg1 count:(unsigned long long)arg2;
- (id)initWithDefaultValueForKeys:(id)arg1;
- (void)setScore:(double)arg1 forKey:(id)arg2;
- (double)scoreForKey:(id)arg1 found:(_Bool *)arg2;
- (id)toDictionary;
- (void)atx_writeToFile:(struct __sFILE *)arg1;
- (id)initWithDefaultValueForScoreTypeKeys;

@end
