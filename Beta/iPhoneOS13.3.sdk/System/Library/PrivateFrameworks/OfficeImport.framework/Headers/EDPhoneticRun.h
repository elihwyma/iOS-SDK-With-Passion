/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPhoneticRun : NSObject

{
    unsigned int mCharIndex;
    unsigned int mBaseCharIndex;
    unsigned int mBaseCharCount;
}

- (id)init;
- (id)description;
- (unsigned int)charIndex;
- (void)adjustIndex:(unsigned long long)arg1;
- (void)setCharIndex:(unsigned int)arg1;
- (unsigned int)charBaseIndex;
- (void)setCharBaseIndex:(unsigned int)arg1;
- (unsigned int)charBaseCount;
- (void)setCharBaseCount:(unsigned int)arg1;

@end
