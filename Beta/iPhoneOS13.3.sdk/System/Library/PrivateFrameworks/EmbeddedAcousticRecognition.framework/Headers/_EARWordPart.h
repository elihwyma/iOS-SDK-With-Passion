/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface _EARWordPart : NSObject

{
    NSString *_tagName;
    NSString *_orthography;
    long long _tag;
    unsigned long long _frequency;
    NSSet *_pronunciations;
}

@property (nonatomic, readonly) NSString *orthography;
@property (nonatomic, readonly) long long tag;
@property (nonatomic, readonly) NSString *tagName;
@property (nonatomic, readonly) unsigned long long frequency;
@property (nonatomic, readonly) NSSet *pronunciations;

- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3;
- (id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4;

@end
