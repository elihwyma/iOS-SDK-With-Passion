/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SNClassificationResult : NSObject

{
    NSArray *_classifications;
    CDStruct_e83c9415 _timeRange;
}

@property (copy, nonatomic) NSArray *classifications;
@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (id)_init;

@end
