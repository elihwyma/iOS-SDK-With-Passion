/*
 Image: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FilterElementDefinition : NSObject

{
    NSString *_rootName;
    unsigned long long _rule;
    unsigned long long _mask;
    unsigned long long _subRule;
    unsigned long long _subMask;
    int _subAuxValueCount;
    _Bool _hasAuxValue;
    unsigned long long _auxValue;
    NSMutableDictionary *_setOfMatches;
    NSString *_namedLink;
    FilterElementDefinition *_wildCard;
    FilterElementDefinition *_superWildCard;
}

- (void)dealloc;
- (_Bool)isBottomValue;
- (CDStruct_aeabb2c7)encodeInto:(struct _MDPlistContainer *)arg1 auxArray:(id)arg2 namedRootMap:(id)arg3;
- (id)initAsRoot:(id)arg1;
- (void)addRuleField:(int)arg1 value:(int)arg2 hasAuxValue:(_Bool)arg3 auxValue:(unsigned long long)arg4 inside:(_Bool)arg5 forPathComponents:(id)arg6 permitLink:(_Bool)arg7 componentIndex:(int)arg8 parentElement:(id)arg9 copyParentWildcardLink:(_Bool)arg10;
- (void)dumpAttributesInto:(char *)arg1 forLevel:(int)arg2;
- (void)dump:(int)arg1;

@end
