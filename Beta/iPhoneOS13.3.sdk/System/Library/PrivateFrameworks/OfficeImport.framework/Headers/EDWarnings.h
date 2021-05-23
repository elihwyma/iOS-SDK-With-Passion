/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDWarnings : NSObject

{
    NSMutableArray *mWarnings;
}

- (void)addWarning:(id)arg1;
- (void)reportWarningsWithAssociatedObject:(id)arg1;

@end
