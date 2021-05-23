/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@interface CoreThemeConstantEnumerator : NSObject

{
    void *_globalListPointer;
    long long _listIndex;
    long long _indexOfLastEntry;
    _Bool _isPastLastEntry;
}

+ (id)enumeratorForGlobalListAtAddress:(void *)arg1;

- (id)initWithGlobalListAtAddress:(void *)arg1;
- (id)nextConstantHelper;
- (void)_moveToIndexOfLastEntry;
- (id)currentConstantHelper;
- (long long)constantCount;
- (id)previousConstantHelper;
- (id)firstConstantHelper;
- (id)lastConstantHelper;

@end
