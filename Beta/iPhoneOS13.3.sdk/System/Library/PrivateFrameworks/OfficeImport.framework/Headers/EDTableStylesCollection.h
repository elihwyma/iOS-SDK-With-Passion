/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDTableStylesCollection : EDCollection

{
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}

- (id)objectWithName:(id)arg1;
- (id)defaultTableStyle;
- (id)defaultPivotStyle;
- (id)defaultTableStyleName;
- (void)setDefaultTableStyleName:(id)arg1;
- (id)defaultPivotStyleName;
- (void)setDefaultPivotStyleName:(id)arg1;

@end
