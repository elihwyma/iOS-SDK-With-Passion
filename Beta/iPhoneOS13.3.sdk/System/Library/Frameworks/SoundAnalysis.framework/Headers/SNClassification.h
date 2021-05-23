/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SNClassification : NSObject

{
    NSString *_identifier;
    double _confidence;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (id)_init;

@end
