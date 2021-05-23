/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : NSObject

{
    NSMutableArray *_tokens;
}

- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 levelDescriptions:(id)arg2 language:(int)arg3;
- (id)listLevelTextForOutline:(id)arg1;
- (unsigned long long)tokenCount;
- (id)token:(unsigned int)arg1;

@end
