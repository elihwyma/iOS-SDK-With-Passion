/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

__attribute__((visibility("hidden")))
@interface EMSheetMapper : CMMapper

- (int)width;
- (int)height;
- (int)preprocessWidthWithState:(id)arg1;
- (int)preprocessHeightWithState:(id)arg1;
- (struct CGSize)adjustedSize;
- (struct CGSize)preprocessSizeWithState:(id)arg1;

@end
