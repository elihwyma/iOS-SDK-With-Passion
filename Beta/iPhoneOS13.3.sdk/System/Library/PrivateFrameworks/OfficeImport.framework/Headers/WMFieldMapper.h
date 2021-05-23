/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WMParagraphMapper.h>

@class NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface WMFieldMapper : WMParagraphMapper

{
    int mMode;
    unsigned int mType;
    NSMutableString *mMarkerText;
    NSString *mLink;
}

- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;

@end
