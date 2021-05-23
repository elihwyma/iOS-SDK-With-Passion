/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDKeyedCollection.h>

__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection : EDKeyedCollection

{
    unsigned long long mNextContentFormatId;
}

- (id)init;
- (unsigned long long)addObject:(id)arg1;
- (void)setupDefaults;
- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2;
- (_Bool)isOverwritingKeyOK;

@end
