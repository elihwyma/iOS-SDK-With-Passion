/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SNDSPConfiguration : NSObject

{
    NSArray *_dspItems;
}

@property (retain, nonatomic) NSArray *dspItems;

- (id)initWithArray:(id)arg1 resourcePath:(id)arg2;

@end
