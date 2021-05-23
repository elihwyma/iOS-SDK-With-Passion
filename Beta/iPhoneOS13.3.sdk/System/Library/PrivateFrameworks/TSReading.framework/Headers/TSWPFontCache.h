/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSULRUCache;

@interface TSWPFontCache : NSObject

{
    TSULRUCache *_fontCache;
    NSArray *_familyNames;
    NSMutableDictionary *_familyDisplayNames;
    NSArray *_familyFonts;
    NSMutableArray *_cachedAvailableMembers;
    NSString *_cachedMembersFamilyName;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCache;
+ (id)_singletonAlloc;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_FontWasDownloaded:(id)arg1;
- (struct __CTFont *)_createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3;
- (id)p_excludedFamilyNames;
- (id)sortedFontFamilies;
- (struct __CTFont *)createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3 attributes:(id)arg4;
- (id)sortedFontFamilyEntriesForStylesheet:(id)arg1;
- (id)displayNameForFontFamily:(id)arg1;
- (id)availableMembersOfFontFamily:(id)arg1;

@end
