/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString

{
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
+ (id)pathWithComponents:(id)arg1;

- (unsigned long long)length;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (const unsigned short *)_fastCharacterContents;
- (_Bool)isEqualToString:(id)arg1;
- (id)lastPathComponent;
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)pathExtension;
- (_Bool)isAbsolutePath;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByStandardizingPath;
- (id)stringByResolvingSymlinksInPath;
- (id)pathComponents;
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;
- (id)stringByDeletingPathExtension;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByExpandingTildeInPath;

@end
