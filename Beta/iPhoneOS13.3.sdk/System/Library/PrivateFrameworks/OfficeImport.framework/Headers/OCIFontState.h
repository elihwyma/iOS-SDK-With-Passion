/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCIFontState : NSObject

{
    NSMutableDictionary *_replacedFontMap;
}

@property (nonatomic, readonly) NSMutableDictionary *replacedFontMap;

- (id)init;

@end
