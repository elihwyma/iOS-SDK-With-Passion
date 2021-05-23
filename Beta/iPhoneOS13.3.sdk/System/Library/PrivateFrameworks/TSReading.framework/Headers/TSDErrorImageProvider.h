/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDImageProvider.h>

@interface TSDErrorImageProvider : TSDImageProvider

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (struct CGSize)naturalSize;
- (_Bool)isError;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (struct CGPDFDocument *)p_iconPDFDocument;

@end
