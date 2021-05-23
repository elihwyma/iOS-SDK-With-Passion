/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PPScoreInputSet : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)iterScoreInputsWithBlock:(CDUnknownBlockType)arg1;
+ (id)stringForScoreInput:(unsigned long long)arg1;
+ (unsigned long long)maxScoreInput;
+ (unsigned long long)scoreInputForString:(id)arg1;
+ (id)scoreInputsToNames;
+ (id)scoreInputKeys;
+ (id)scoreInputSharedKeySet;

@end
