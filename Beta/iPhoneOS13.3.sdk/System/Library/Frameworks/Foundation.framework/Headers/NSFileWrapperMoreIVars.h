/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSHashTable, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWrapperMoreIVars : NSObject

{
    NSURL *contentsURL;
    _Bool contentsMustBeReadWithoutMapping;
    _Bool attributesMustBeWrittenSoNoHardLinking;
    NSHashTable *parents;
    NSError *contentsLazyReadingError;
    NSDictionary *cachedDirectoryChildrenAsDictionary;
}

@end
