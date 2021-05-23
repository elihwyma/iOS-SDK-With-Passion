/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _UIActivityItemCustomizationGroup : NSObject

{
    NSString *_name;
    NSString *_identifier;
    NSArray *_customizations;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *customizations;

- (id)_initGroupWithName:(id)arg1 identifier:(id)arg2 customizations:(id)arg3;

@end
