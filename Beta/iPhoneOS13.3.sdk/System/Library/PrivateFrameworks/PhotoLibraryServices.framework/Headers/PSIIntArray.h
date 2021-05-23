/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PSIIntArray : NSObject

{
    struct sqlite3_intarray *_elementArray;
    long long _staticElementBuffer[256];
    long long *_elementBuffer;
    unsigned long long _elementBufferSize;
    _Bool _freeOnUnprepare;
}

@property (nonatomic, readonly) long long *elementBuffer;

- (void)dealloc;
- (id)initWithLabel:(id)arg1 database:(struct sqlite3 *)arg2;
- (void)prepareForNumberOfElements:(unsigned long long)arg1;
- (void)_prepareForNumberOfElements:(unsigned long long)arg1;
- (void)unprepare;
- (void)_unprepare;
- (void)bindElements:(struct __CFSet *)arg1;
- (void)bindElements:(struct __CFArray *)arg1 range:(struct _NSRange)arg2;
- (void)bindElements:(const long long *)arg1 numberOfElements:(unsigned long long)arg2;
- (void)unbind;

@end
