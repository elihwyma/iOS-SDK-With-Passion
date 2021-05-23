/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSDictionary, _PASLock;

@interface PPNamedEntityCustomTagger : NSObject

{
    _PASLock *_lock;
    NSDictionary *_categoryMapping;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)enumerateNamedEntitiesInText:(id)arg1 range:(struct _NSRange)arg2 addNamedEntity:(CDUnknownBlockType)arg3;
- (void)enumerateNamedEntitiesInText:(id)arg1 addNamedEntity:(CDUnknownBlockType)arg2;

@end
