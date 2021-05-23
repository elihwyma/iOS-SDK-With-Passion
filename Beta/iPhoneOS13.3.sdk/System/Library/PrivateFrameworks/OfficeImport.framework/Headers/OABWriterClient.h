/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABWriterClient : NSObject

- (void)writeClientAnchorFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientTextFromShape:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromTableCell:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1 state:(id)arg2;

@end
