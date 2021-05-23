/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADTableStyleCollection : NSObject

{
    NSMutableArray *_styles;
    NSMutableDictionary *_styleMap;
    NSString *_defaultTableStyleId;
}

@property (copy, nonatomic) NSString *defaultTableStyleId;

- (id)init;
- (void)addTableStyle:(id)arg1;
- (id)tableStyles;
- (id)tableStyleWithId:(id)arg1;

@end
