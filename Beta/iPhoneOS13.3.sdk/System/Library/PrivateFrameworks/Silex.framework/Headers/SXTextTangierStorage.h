/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPStorage.h>

@class NSCache, NSLocale, NSMutableArray, NSSet;

@interface SXTextTangierStorage : TSWPStorage

{
    _Bool _isSelectable;
    _Bool _shouldHyphenate;
    struct os_unfair_lock_s _unfairLock;
    NSLocale *_locale;
    NSSet *_rangedExclusionPaths;
    NSMutableArray *_attachments;
    NSCache *_tokenizersCache;
}

@property (retain, nonatomic) NSMutableArray *attachments;
@property (retain, nonatomic) NSCache *tokenizersCache;
@property (nonatomic, readonly) struct os_unfair_lock_s unfairLock;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) _Bool isSelectable;
@property (nonatomic) _Bool shouldHyphenate;
@property (retain, nonatomic) NSSet *rangedExclusionPaths;

- (void)dealloc;
- (_Bool)supportsSections;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2 storageKind:(int)arg3 string:(id)arg4 locale:(id)arg5;
- (struct _NSRange)insertAttachmentOrFootnote:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(_Bool)arg2;

@end
