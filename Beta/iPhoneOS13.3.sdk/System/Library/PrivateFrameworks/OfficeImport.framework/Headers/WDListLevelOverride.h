/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class WDDocument, WDListLevel;

__attribute__((visibility("hidden")))
@interface WDListLevelOverride : NSObject

{
    WDDocument *mDocument;
    WDListLevel *mListLevel;
    unsigned char mLevel;
    long long mStartNumber;
    _Bool mStartNumberOverridden;
}

- (id)description;
- (unsigned char)level;
- (_Bool)isListLevelOverridden;
- (id)listLevel;
- (long long)startNumber;
- (void)setStartNumber:(long long)arg1;
- (id)mutableListLevel;
- (_Bool)isStartNumberOverridden;
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;

@end
