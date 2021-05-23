/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NLTagger, NSLocale, NSString, TITransientLexiconManager;

@protocol OS_dispatch_queue;

@interface TISmartSelector : NSObject

{
    struct unique_ptr<KB::StaticDictionary, std::__1::default_delete<KB::StaticDictionary>> _staticDictionary;
    struct _LXLexicon *_contactDictionary;
    CDUnknownBlockType _contactObserver;
    unsigned long long _options;
    NSLocale *_locale;
    TITransientLexiconManager *_transientLexiconManager;
    NLTagger *_namedEntityTagger;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _dataChangedHandler;
}

@property unsigned long long options;
@property (retain) NSLocale *locale;
@property (retain) TITransientLexiconManager *transientLexiconManager;
@property (retain) NLTagger *namedEntityTagger;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy) CDUnknownBlockType dataChangedHandler;
@property (retain) NSString *language;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithOptions:(unsigned long long)arg1 language:(id)arg2 dataChangedHandler:(CDUnknownBlockType)arg3;
- (struct _NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
- (struct _NSRange)longestRangeEncapsulatingSubstringInDocument:(id)arg1 containingRange:(struct _NSRange)arg2 tokenizedRanges:(id)arg3 meetingCondition:(CDUnknownBlockType)arg4;
- (void)loadStaticPhraseDictionary;
- (struct _NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 options:(unsigned long long)arg4;

@end
