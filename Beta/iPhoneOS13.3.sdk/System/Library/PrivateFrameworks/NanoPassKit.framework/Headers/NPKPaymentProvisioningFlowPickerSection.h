/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface NPKPaymentProvisioningFlowPickerSection : NSObject

{
    NSString *_title;
    NSString *_footer;
    NSMutableArray *_items;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic, readonly) NSMutableArray *items;

+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2;
+ (id)sectionWithTitle:(id)arg1;

- (id)description;

@end
