/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CMProperty : NSObject

{
    NSString *cachedCssString;
}

- (int)compareValue:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)cssString;
- (id)initWithCssString:(id)arg1;
- (id)cachedCssStringForName:(id)arg1;

@end
