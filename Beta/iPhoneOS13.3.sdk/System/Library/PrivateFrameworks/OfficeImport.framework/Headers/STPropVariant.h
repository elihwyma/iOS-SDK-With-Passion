/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface STPropVariant : NSObject

{
    struct _SsrwPropVariant mProp;
}

- (void)dealloc;
- (void)setStringValue:(id)arg1;
- (void)setBlobValue:(id)arg1;
- (void)setShortValue:(short)arg1;
- (void)setLongValue:(int)arg1;
- (struct _SsrwPropVariant *)propVariant;
- (id)asDataOfType:(int *)arg1;

@end
