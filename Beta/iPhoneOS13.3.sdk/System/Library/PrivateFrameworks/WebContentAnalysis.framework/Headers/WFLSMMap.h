/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface WFLSMMap : NSObject

{
    struct __LSMMap *map;
    NSNumber *threshold;
}

@property (copy) NSNumber *threshold;

+ (id)mapFromFilePath:(id)arg1;
+ (id)mapWithMap:(struct __LSMMap *)arg1;
+ (id)mapFromURL:(id)arg1;

- (void)dealloc;
- (struct __LSMMap *)_map;
- (id)initWithMap:(struct __LSMMap *)arg1;
- (long long)numberOfCategories;
- (void)_setMap:(struct __LSMMap *)arg1;
- (id)evaluate:(id)arg1;
- (id)wordDump:(id)arg1;
- (id)initWithMapFromURL:(id)arg1;
- (id)initWithMapFromFilePath:(id)arg1;
- (struct __LSMText *)_createLSMTextFromString:(id)arg1;

@end
