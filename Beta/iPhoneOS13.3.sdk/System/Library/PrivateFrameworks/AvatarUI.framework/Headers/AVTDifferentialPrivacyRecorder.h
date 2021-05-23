/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AVTDifferentialPrivacyRecorder : NSObject

{
    CDUnknownBlockType _stringRecorderProvider;
    CDUnknownBlockType _numRecorderProvider;
    NSMutableDictionary *_stringRecorders;
    NSMutableDictionary *_numRecorders;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType stringRecorderProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType numRecorderProvider;
@property (nonatomic, readonly) NSMutableDictionary *stringRecorders;
@property (nonatomic, readonly) NSMutableDictionary *numRecorders;

+ (CDUnknownBlockType)makeCachingStringRecorderProvider:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)makeCachingNumRecorderProvider:(CDUnknownBlockType)arg1;

- (id)init;
- (void)recordString:(id)arg1 forKey:(id)arg2;
- (id)initWithStringRecorderProvider:(CDUnknownBlockType)arg1 numericDataRecorderProvider:(CDUnknownBlockType)arg2;
- (void)recordNumber:(id)arg1 forKey:(id)arg2;

@end
