/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDStyle.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDNamedStyle : EDStyle

{
    NSString *mName;
}

- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;

@end
