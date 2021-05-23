/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MiroColorConfiguration.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MiroTitleColorConfiguration : MiroColorConfiguration

{
    int _snapshotAspect;
    NSDictionary *_titleParameters;
    NSString *_debugTitleName;
}

@property (nonatomic) int snapshotAspect;
@property (retain, nonatomic) NSDictionary *titleParameters;
@property (retain, nonatomic) NSString *debugTitleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long titleColorTreatment;
@property (nonatomic, readonly) unsigned long long subtitleColorTreatment;
@property (nonatomic, readonly) unsigned long long backgroundShapeColorTreatment;
@property (nonatomic, readonly) _Bool titleStyleHasColorRigging;
@property (nonatomic, readonly) _Bool titleStyleHasStrap;
@property (nonatomic, readonly) _Bool titleStyleIsCentered;
@property (nonatomic, readonly) _Bool titleStyleIsLowerThird;
@property (nonatomic, readonly) _Bool titleStyleIsSideBySide;

+ (void)initialize;
+ (id)titleColorConfigurationWithTitleStyleID:(id)arg1 snapshotAspect:(int)arg2 randomizerSeed:(unsigned int)arg3;

- (id)initWithTitleStyleID:(id)arg1 randomizerSeed:(unsigned int)arg2;
- (_Bool)_verifyTitleStylesAreCorrect:(id)arg1;

@end
