//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerEnrollmentDataManager : NSObject
{
}

+ (BOOL)writeMetaDict:(id)arg1 atMetaPath:(id)arg2;
+ (id)_getBaseMetaDictionaryForUtterancePath:(id)arg1;
+ (BOOL)saveMetadata:(id)arg1 isExplicitEnrollment:(BOOL)arg2;
+ (BOOL)saveUtterance:(id)arg1 utteranceAudioPath:(id)arg2 numSamplesToWrite:(NSUInteger)arg3 isExplicitEnrollment:(BOOL)arg4;
+ (BOOL)saveUtteranceAndMetadata:(id)arg1 atDirectory:(id)arg2 isExplicitEnrollment:(BOOL)arg3;
+ (void)saveRawUtteranceAndMetadata:(id)arg1 to:(id)arg2 isExplicitEnrollment:(BOOL)arg3;

@end

