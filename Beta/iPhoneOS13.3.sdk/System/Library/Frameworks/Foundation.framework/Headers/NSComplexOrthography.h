/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOrthography.h>

@class NSDictionary, NSString;

@interface NSComplexOrthography : NSOrthography

{
    NSString *_dominantScript;
    NSDictionary *_languageMap;
    unsigned int _orthographyFlags;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (unsigned int)orthographyFlags;
- (id)dominantScript;
- (id)languageMap;

@end
