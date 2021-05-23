/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDictionary.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface NSKeyValueChangeDictionary : NSDictionary

{
    CDStruct_e173081d _details;
    NSObject *_originalObservable;
    _Bool _isPriorNotification;
    _Bool _isRetainingObjects;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)setOriginalObservable:(id)arg1;
- (void)setDetailsNoCopy:(CDStruct_e173081d)arg1 originalObservable:(id)arg2;
- (id)initWithDetailsNoCopy:(CDStruct_e173081d)arg1 originalObservable:(id)arg2 isPriorNotification:(_Bool)arg3;
- (void)retainObjects;

@end
