/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUITabularLockupLayout : NSObject

{
    NSArray *_columns;
}

@property (nonatomic, readonly) NSArray *columns;

+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;

- (id)initWithLockup:(id)arg1 context:(id)arg2;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;

@end
