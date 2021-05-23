/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CFPDDataBuffer : NSObject

+ (id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(_Bool)arg2;
+ (id)newBufferFromPropertyList:(void *)arg1;
+ (id)newBufferFromCFData:(struct __CFData *)arg1;

- (unsigned long long)length;
- (void *)bytes;
- (_Bool)purgable;
- (void)endAccessing;
- (_Bool)beginAccessing;
- (_Bool)validatePlist;
- (void)quicklyValidatePlistAndOnFailureInvokeBlock:(CDUnknownBlockType)arg1;
- (void *)copyPropertyListWithMutability:(unsigned long long)arg1 error:(struct __CFError **)arg2;
- (struct __CFData *)copyCFData;
- (id)copyXPCData;

@end
