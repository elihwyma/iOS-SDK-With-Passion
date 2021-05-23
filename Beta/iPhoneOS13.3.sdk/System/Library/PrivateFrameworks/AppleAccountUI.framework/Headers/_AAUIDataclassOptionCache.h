/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface _AAUIDataclassOptionCache : NSObject

{
    struct NSDictionary *_dataclassOptions;
    NSArray *_filteredDataclasses;
}

@property (copy, nonatomic) NSDictionary *dataclassOptions;
@property (copy, nonatomic) NSArray *filteredDataclasses;

- (id)initWithDataclassOptions:(struct NSDictionary *)arg1;

@end
